/*Leilani Vasquez-00292291
This program asks the user to enter a number, and if zero is entered, and error message is displayed*/
#include <stdio.h>
#include <stdlib.h>

void validate(int num);

int main(void) {
   int value;

    printf("Enter an integer: ");
    scanf("%d", &value);

    validate(value);

    return EXIT_SUCCESS;
}

void validate(int num) {
    if (num == 0) {
        printf("ERROR\n");
        exit(EXIT_FAILURE);
    } else {
        int result = num * 2;
        printf("Result: %d\n", result);
    }
}
