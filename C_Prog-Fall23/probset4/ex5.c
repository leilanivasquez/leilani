/*Leilani Vasquez- 00292291
This program prints the beers on the wall song*/
#include <stdio.h>
#include <stdlib.h>

void countdown(int);
void bottles(int);

int main(void)
{
    countdown(3);
    bottles(99);
    return 0;

}

void countdown(int num)
{
    if (num <= 0)
    {
        printf("%i\n", num);
        return;
    }
    printf("%i, ", num);
    countdown(num-1);
}

void bottles(int numbottles)
{
    if(numbottles <= 0)
    {
        puts("No bottles of beer on the wall, no bottles of beer, you can’t take one down, you can’t pass it around, ’cause there are no more bottles of beer on the wall!\n");
        return;
    }
    printf("%i bottles of beer on the wall, %i bottles of beer, take one down, pass it around, %i bottles of beer on the wall.\n", numbottles, numbottles, numbottles-1);
    bottles(numbottles-1);
}