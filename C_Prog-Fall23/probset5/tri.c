/*Leilani Vasquez- 00292291
This program prompts the users to put in three numbers, then calsulate wheter you
could make a triangle out of the three numbers entered*/
#include <stdio.h>
#include <stdlib.h>

int isTriangle(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        return 0;
    }

    if (a + b > c && a + c > b && b + c > a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main() {
    int s1, s2, s3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &s1, &s2, &s3);

    if (isTriangle(s1, s2, s3)) {
        printf("You can form a triangle with these lengths.\n");
    }
    else
    {
        printf("You can't form a triangle with these lengths.\n");
    }

    return 0;
}
