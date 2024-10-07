/*Leilani Vasquez-00292291
This functions uses the input parameter and malloc to crate an array of N integers.*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void printIntArray(int arr[], int size);
int* createIntArray(int n);

int main() {
    int* a = createIntArray(5);
    printIntArray(a, 5);

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