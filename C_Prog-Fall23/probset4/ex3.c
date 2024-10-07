/*Leilani Vasquez-00292291
This program rolls a six sided dice*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void rollDie();
void rollNDie(int sides);
int main(){
    srand(time(0));
    rollDie();
    rollNDie(20);
    rollNDie(100);
}
void rollNDie(int sides){
    int randVal = rand() % sides + 1;
    printf("Roll %d sided die = %d\n", sides,  randVal);
}
void rollDie(){
    int randVal = rand() % 6 + 1;
    printf("Roll = %d\n", randVal);
}