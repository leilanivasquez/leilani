#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double power(double x, int n);

int main()
{
    double x = 7.0;
    int n = 5;
    double result = power(x, n);
    printf("%lf^%d = %lf\n", x, n, result);
    return 0;
}

double power(double x, int n)
{
    double result = 1.0;

    if (n > 0)
    {
        for (int i = 0; i < n; i++)
        {
            result *= x;
        }
    }
    else if (n < 0)
    {
        for (int i = 0; i < -n; i++)
        {
            result /= x;
        }
    }

    return result;
}