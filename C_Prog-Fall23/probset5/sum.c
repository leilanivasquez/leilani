/*Leilani Vasquez- 00292291
This program displays the sums and products of numbers*/
#include <stdio.h>
#include <stdlib.h>

// function to calculate the sum
int sum(int m, int n) {
    if (m == n) {
        return n;
    } else {
        return m + sum(m + 1, n);
    }
}

// function to calculate the product
int product(int m, int n) {
    if (m == n) {
        return n;
    } else {
        return n * product(m, n - 1);
    }
}

int main(void) {
    int result1, result2;

    // test the sum function
    result1 = sum(1, 5);
    printf("sum: %d\n", result1);

    // test the product function
    result2 = product(2, 4);
    printf("product: %d\n", result2);

    return 0;
}
