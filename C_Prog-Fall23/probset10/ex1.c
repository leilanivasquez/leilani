/*Leilani Vasquez- 00292291
This program fills an array with 50 random numbers and opens a file called numbers.txt.*/#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int nums[50] = {0};
    srand(time(0));

    for(int i = 0; i < 50; i++)
    {
        int n = rand()%100;
        nums[i] = n;
    }

    for (int i = 0; i < 50; i++)
    {
        printf("%d\n", nums[i]);
    }

    FILE* f = fopen("numbers.txt","w");

    for (int i = 0; i < 50; i++)
    {
        fprintf(f,"%d\n", nums[i]);
    }
    fclose(f);
    return 0;
}