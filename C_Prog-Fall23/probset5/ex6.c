/*Leilani Vasquez- 00292291
This program uses multadd()*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PI 3.1415


double scaryTrig();
double multadd(double, double, double);
double evenScarier(double);


int main()
{

    double res1 = scaryTrig();
    double res2 = evenScarier(2.0);

    printf("%lf, %lf\n", res1, res2);
    return 0;
}

double evenScarier(double x)
{
    double eX = exp(-x);
    double sq = sqrt(1 - eX);
    return multadd(x, eX, sq);
}

double scaryTrig()
{
    double c1 = sin(PI/4);
    double a1 = 1.0/2.0;
    double b1 = cos(PI/4);

    return multadd(a1, b1, c1);

}

double multadd(double a, double b, double c)
{
    double result = c + a * b;
    return result;
}