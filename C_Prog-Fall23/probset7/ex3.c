/*Leilani Vasquez- 00292291
Similar to last program, but asks user for three integers instead of two*/

#include <stdio.h>
#include <stdlib.h>

void printIntArray(int size, int arr[]);

int main(void) {
    int number;
    int digits[3];

    printf("enter a three-digit integer: ");
    scanf("%d", &number);

    if (number < 100 || number > 999) {
        printf("enter a valid three-digit integer.\n");
        return EXIT_FAILURE;
    }

    digits[0] = number / 100;
    digits[1] = (number / 10) % 10;
    digits[2] = number % 10;

    printf("digits: ");
    printIntArray(3, digits);

    return EXIT_SUCCESS;
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
