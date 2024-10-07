/*Leilani Vasquez- 00292291
This funcion takes three doubles as parameters
and that prints their multadditionization.
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PI 3.1415

void multadd(double, double, double);
void scaryTrig();
void evenScarier(double);

int main() {
    multadd(1, 2, 3);
    multadd(1, 3, 5);

    return 0;
}

void evenScarier(double x) {
    double eX = exp(-x);
    double sq = sqrt(1 - eX);
    multadd(x, eX, sq);
}

void scaryTrig() {
    double c1 = sin(PI/4);
    double a1 = 1.0/2.0;
    double b1 = cos(PI/4);

    multadd(a1, b1, c1);
}

void multadd(double a, double b, double c) {
    double result = c + a * b;
    printf("The result is %lf\n", result);
}
