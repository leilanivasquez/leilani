/*Leilani Vasquez- 00292291
corrected program that prints 71*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number = 71;
    int lastDigit = number % 10;
    int firstDigit = number / 10;
    int fullNum = lastDigit * 10 + firstDigit;
    printf("%i\n", fullNum);
    return EXIT_SUCCESS;
}
