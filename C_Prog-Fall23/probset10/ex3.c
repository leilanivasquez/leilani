/*Leilani Vasquez- 00292291
This program  crates an array of 10 highs score structs and writes them to abinary file*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    char init1;
    char init2;
    char init3;
    int highScore;
} highScoreEntry;

int main() {
    highScoreEntry hse[10] =
    {
        {'A', 'A', 'A', 99},
        {'B', 'B', 'B', 100},
        {'A', 'A', 'A', 99},
        {'C', 'C', 'C', 95},
        {'C', 'A', 'C', 89},
        {'C', 'C', 'B', 90},
        {'C', 'C', 'C', 69},
        {'B', 'A', 'B', 96},
        {'A', 'B', 'C', 100},
        {'A', 'C', 'A', 93},
    };

    FILE *f = fopen("scores.dat", "wb");
    fwrite(hse, sizeof(highScoreEntry), 10, f);
    fclose(f);

    f = fopen("scores.dat", "rb");
    highScoreEntry *highscores = (highScoreEntry *)malloc(sizeof(highScoreEntry) * 10);
    fread(highscores, sizeof(highScoreEntry), 10, f);
    fclose(f);

    for (int i = 0; i < 10; i++) {
        printf("%c%c%c %d\n", highscores[i].init1, highscores[i].init2, highscores[i].init3, highscores[i].highScore);
    }

    free(highscores);

    return 0;
}
