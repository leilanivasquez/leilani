#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printmenu();

int main() {
    int choice = 0;
    printmenu();
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            puts("Choice 1 selected");
            break;
        case 2:
            puts("Choice 2 selected");
            break;
        case 3:
            puts("Choice 3 selected");
            break;
        default:
            puts("Goodbye");
    }

    return 0;
}

void printmenu() {
    puts("enter a 1");
    puts("enter a 2");
    puts("enter a 3");
    puts("enter any other number to quit");
}
