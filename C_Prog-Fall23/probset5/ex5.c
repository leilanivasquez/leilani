/*Leilani Vasquez- 00292291
This program executes the distance between two points*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double power(double, int);
double sum_squares(double, double, double, double);
double distance(double, double, double, double);

int main()
{
    double x = distance(2.0 ,2.0, 4, 5);
    printf("%lf\n", x);
    return 0;
}
double distance(double x1, double y1, double x2, double y2)
{
    double sumsq = sum_squares(x1, y1, x2, y2);
    double sqroot = sqrt(sumsq);
    return sqroot;

}

double sum_squares(double x1, double y1, double x2, double y2)
{
    double deltaX = x2 - x1;
    double deltaY = y2 - y1;
    double deltax2 = power(deltaX, 2);
    double deltay2 = power(deltaY, 2);
    double result = deltax2 + deltay2;
    return result;
}
double power(double x, int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return x * power(x, n-1);
    }
}
