/*Leilani Vasquez- 00292291
This Program asks the user to enter an number between 1 and 9*/
#include <stdio.h>

int main(void) {
    printf("Enter a number between 0 and 9: ");

    int input = getchar();

    if (input >= '0' && input <= '9') {
        printf("You entered the digit %c\n", input);
    } else {
        printf("Input is invaid. Enter a number between 0 and 9.\n");
    }

    return 0;
}
