/*Leilani Vasquez- 00292291
Prototype that prints two arrays*/
#include <stdio.h>

void printIntArray(int size, int arr[]);

int main() {
    int arr1[] = {2, 5, 7, 8, 1};
    int arr2[] = {1, 2, 9, 1};

    printf("array 1: ");
    printIntArray(5, arr1);

    printf("array 2: ");
    printIntArray(4, arr2);

    return 0;
}

void printIntArray(int size, int arr[]) {
    printf("[ ");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf(" ]\n");
}
