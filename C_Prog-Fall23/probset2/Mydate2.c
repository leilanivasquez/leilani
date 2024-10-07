/*Leilani Vasquez- Problem set 2 exercise 2.3
This problem set prints the date in both the european and US formats when
the numbers are out into the corrects places when promted*/

#include "stdio.h"
#include "stdlib.h"

int main()
{
    int month, day, year;
    puts("Enter the month");
    scanf("%d", &month);
    puts("Enter the day");
    scanf("%d", &day);
    puts("Enter the year");
    scanf("%d", &year);

    //Display US date
    printf("%d/%d/%d\n", month, day, year);
    //Display EU date
    printf("%d.%d.%d\n", day, month, year);

}