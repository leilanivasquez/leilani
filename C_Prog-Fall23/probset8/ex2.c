#include <stdio.h>
#include <ctype.h>
#include <string.h>

void letterHist(char*, int[]);
int getIndexByLetter(char);
void printArray(int a[]);

int main()
{
    char* s = "aabbbacdjdvnjkaljirlfjlaJILCIVELZZZZZZIJFLDJSLKJIVJISKJ\n";
    int hist[26] = {0};
    letterHist(s, hist);
    printArray(hist);

    return 0;
}

void letterHist(char* sr, int alpha[])
{
    int l = strlen(sr);
    for (int i = 0; i < l; i++)
    {
        if (isalpha(sr[i]))
        {
            int ind = getIndexByLetter(sr[i]);
            alpha[ind]++;
        }
    }
}

int getIndexByLetter(char c)
{
    char temp = toupper(c);
    return temp - 'A';
}

void printArray(int a[])
{
    for (int i = 0; i < 26; i++)
    {
        printf("%c: %d\n", i + 'A', a[i]);
    }
}
