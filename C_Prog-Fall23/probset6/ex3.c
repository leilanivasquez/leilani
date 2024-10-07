#include <stdio.h>

// prototypes
int firstNumber();
int secondNumber(int lowerBound);
void range(int lower, int upper);

int main() {
    int lower = firstNumber();
    int upper = secondNumber(lower);
    printf("range from %d to %d:\n", lower, upper);
    range(lower, upper);

    return 0;
}

int firstNumber()
{
    int number;
    do
    {
        printf("enter a number between 1 and 10: ");
        scanf("%d", &number);
    }
    while (number < 1 || number > 10);
    return number;
}
int secondNumber(int lower)
{
    int number;
    do
    {
        printf("enter a number between %d and 15: ", lower);
        scanf("%d", &number);
    }
    while (number < lower || number > 15);
    return number;
}

void range(int lower, int upper) {
    for (int i = lower; i <= upper; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
}
