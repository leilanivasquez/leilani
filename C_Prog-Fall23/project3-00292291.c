/*Leilani Vasquez- 00292291
Project 3*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_TITLE_LENGTH 100
#define MAX_ARTIST_LENGTH 100

typedef struct
{
    char title[MAX_TITLE_LENGTH];
    char artist[MAX_ARTIST_LENGTH];
    int year;
} Track;

int loadLibrary(const char* filename, Track** library);
void listTracks(Track* library, int count);
int searchTracksByArtist(Track* library, int count, const char* artist);
void addTrack(Track** library, int* count);
void writeLibraryToFile(const char* filename, Track* library, int count);
void freeLibrary(Track* library);

int main()
{
    Track* trackLibrary = NULL;
    int trackCount = 0;
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Load Music Library\n");
        printf("2. List All Tracks\n");
        printf("3. Search Tracks by Artist\n");
        printf("4. Add New Track\n");
        printf("5. Save Music Library\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                trackCount = loadLibrary("musicLibrary.txt", &trackLibrary);
                if (trackCount == -1)
                {
                    printf("Error loading music library.\n");
                    freeLibrary(trackLibrary);
                    exit(EXIT_FAILURE);
                }
                printf("Success.\n");
                break;

            case 2:
                listTracks(trackLibrary, trackCount);
                break;
            case 3: {
                char artist[MAX_ARTIST_LENGTH];
                printf("Enter artist name: ");
                scanf(" %[^\n]", artist); // read artist name with spaces
                int index = searchTracksByArtist(trackLibrary, trackCount, artist);
                if (index == -1) {
                    printf("No tracks found for this artist '%s'.\n", artist);
                } else {
                    printf("Track found: %d:\n", index);
                    printf("Title: %s\n", trackLibrary[index].title);
                    printf("Artist: %s\n", trackLibrary[index].artist);
                    printf("Year: %d\n", trackLibrary[index].year);
                }
                break;
            }

            case 4:
                addTrack(&trackLibrary, &trackCount);
                break;
            case 5:
                writeLibraryToFile("outputLibrary.txt", trackLibrary, trackCount);
                printf("Music library saved to 'outputLibrary.txt'.\n");
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    }
    while (choice != 6);

    freeLibrary(trackLibrary);
    return 0;
}

int loadLibrary(const char* filename, Track** library)
{
    FILE* file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Error opening file '%s'.\n", filename);
        return -1;
    }

    int numTracks;
    fscanf(file, "%d", &numTracks);
    *library = (Track*)malloc(numTracks * sizeof(Track));
    if (*library == NULL)
    {
        printf("Error\n");
        fclose(file);
        return -1;
    }

    for (int i = 0; i < numTracks; ++i) {
        fscanf(file, " %[^\n]", (*library)[i].title);
        fscanf(file, " %[^\n]", (*library)[i].artist);
        fscanf(file, "%d", &(*library)[i].year);
    }

    fclose(file);
    return numTracks;
}

void listTracks(Track* library, int count)
{
    if (count == 0)
    {
        printf("No tracks in the library\n");
        return;
    }

    printf("Tracks:\n");
    for (int i = 0; i < count; ++i)
    {
        printf("%d. Title: %s\n", i + 1, library[i].title);
        printf("   Artist: %s\n", library[i].artist);
        printf("   Year: %d\n", library[i].year);
    }
}

int searchTracksByArtist(Track* library, int count, const char* artist)
{
    for (int i = 0; i < count; ++i)
    {
        if (strcmp(library[i].artist, artist) == 0)
        {
            return i;
        }
    }
    return -1;
}

void addTrack(Track** library, int* count)
{
    char title[MAX_TITLE_LENGTH];
    char artist[MAX_ARTIST_LENGTH];
    int year;

    // read track info
    printf("Enter the title: ");
    scanf(" %[^\n]", title);
    printf("Enter the artist: ");
    scanf(" %[^\n]", artist);
    printf("Enter the year of release: ");
    scanf("%d", &year);

    // reallocate memory
    *library = (Track*)realloc(*library, (*count + 1) * sizeof(Track));
    if (*library == NULL)
    {
        printf("Error\n");
        exit(EXIT_FAILURE);
    }

    //add new track
    strcpy((*library)[*count].title, title);
    strcpy((*library)[*count].artist, artist);
    (*library)[*count].year = year;

    ++(*count);
}

void writeLibraryToFile(const char* filename, Track* library, int count)
{
    FILE* file = fopen(filename, "w");
    if (file == NULL)
    {
        printf("Error opening file '%s'.\n", filename);
        exit(EXIT_FAILURE);
    }

    // write # of tracks to file
    fprintf(file, "%d\n", count);

    // write each track to file
    for (int i = 0; i < count; ++i)
    {
        fprintf(file, "%s\n", library[i].title);
        fprintf(file, "%s\n", library[i].artist);
        fprintf(file, "%d\n", library[i].year);
    }

    fclose(file);
}

void freeLibrary(Track* library)
{
    free(library);
}
