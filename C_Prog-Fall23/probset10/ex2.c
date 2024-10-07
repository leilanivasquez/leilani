/*Leilani Vasquez- 00292291
This program opens the numbers.txt file and reads 50 numbers to an array*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int nums[50] = {0};
    FILE* f = fopen("numbers.txt","r");

    for (int i = 0; i < 50; i++)
    {
        fscanf(f, "%d", &nums[i]);
    }
    fclose(f);

    for (int i = 0; i < 50; i++)
    {
        printf("%d\n", nums[i]);
    }
    return 0;
}