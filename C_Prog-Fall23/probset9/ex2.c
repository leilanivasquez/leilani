/*Leilani Vasquez- 00292291
This function that takes the three strings and returns the concatenation of the three strings in a new string*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

char* supercat(char* a, char* b, char* c);
void printIntArray(int arr[], int size);
int* createIntArray(int n);

int main() {
    int* a = createIntArray(5);
    printIntArray(a, 5);

    supercat("hello ", "world", "!");

    free(a);
    a = NULL;
    return 0;
}

void printIntArray(int arr[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        if (i != size - 1) {
            printf("%d, ", arr[i]);
        } else {
            printf("%d", arr[i]);
        }
    }
    printf("]\n");
}

int* createIntArray(int n)
{
    int * ptr = 0;
   ptr = (int*)malloc(sizeof(int) * n);

   for(int i = 0; i < n; i++)
   {
        ptr[i] = -1;
   }

   return ptr;
}
char* supercat(char* a, char* b, char* c)
{
    int size = strlen(a) + strlen(b) + strlen(c) +1;
    char* final = (char*) malloc(sizeof(char) * size);
    int fi = 0;
    for(int i = 0; i < strlen(a); i++)
    {
        final[fi] = a[i];
        fi++;
    }
     for(int i = 0; i < strlen(b); i++)
    {
        final[fi] = b[i];
        fi++;
    }
     for(int i = 0; i < strlen(c); i++)
    {
        final[fi] = c[i];
        fi++;
    }
    final[fi]='\0';
    return final;
}