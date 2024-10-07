/*Leilani Vasquez- Problem set 3 exercise 3.4
This problem set prints the current date in the EU and US formats when the user enters the numbers prompted*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    int month, day, year;

    printf("Enter the month: ");
    scanf("%d", &month);

    printf("Enter the day: ");
    scanf("%d", &day);

    printf("Enter the year: ");
    scanf("%d", &year);

    printf("%d/%d/%d\n", month, day, year);
    printf("%d.%d.%d\n", month, day, year);

    return 0;
}
