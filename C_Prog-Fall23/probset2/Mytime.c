/*Leilani Vasquez- Problem set 2 exercise 2.2
This problem set prints the number of seconds in the day that have
passed as well as the remaining seconds in the day*/


#include "stdio.h"
#include "stdlib.h"

int main()
{

int hour, minute, second;
hour = 11;
minute = 30;
second = 15;
printf ("Number of seconds since midnight: %i\n", hour*3600 + minute*60 + second);
printf ("Number of seconds remaining in the day: %i\n", 86400 - hour*3600 + minute*60 + second);


}