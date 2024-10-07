#include <stdio.h>
#include <ctype.h>
#include <string.h>

void letterHist(char*, int[]);
int getIndexByLetter(char);
void printArray(int a[]);
int isDoubleLoon(char *s);

int main()
{
    char* s = "aabbbacdjdvnjkaljirlfjlaJILCIVELZZZZZZIJFLDJSLKJIVJISKJ";
    int hist[26] = {0};
    letterHist(s, hist);
    printArray(hist);

printf("%d\n", isDoubleLoon("AbbA"));
printf("%d\n", isDoubleLoon("Emmett"));
printf("%d\n", isDoubleLoon("Water"));
    return 0;
}
void letterHist(char* sr, int alpha[])
{
    int l = strlen(sr);
    for (int i = 0; i < l; i++)
    {
        int ind = getIndexByLetter(sr[i]);
        alpha[ind]++;
    }
}
int getIndexByLetter(char c)
{
    char temp = toupper(c);
    return temp - 65; //you can subract by 'A' as well
}

void printArray(int a[])
{
    for(int i = 0; i < 26; i++)
    {
        printf(" %c \n", i+65);
    }
}
int isDoubleLoon(char *s)
{
    int freq[26] = {0};
    letterHist(s, freq);
    for(int i = 0; i < 26; i++)
    {
        if(freq[i] != 0 && freq[i] != 2)
        {
            return 0;
        }
    }
    return 1;
}