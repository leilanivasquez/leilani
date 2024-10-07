#include <stdio.h>
#include <ctype.h>
#include <string.h>

void decoder(char src[], char des[]);
char shiftUpper(char c);
char shiftLower(char c);

int main()
{
    char input[] = "hello";
    char output[100];

    decoder(input, output);

    printf("string: %s\n", output);

    return 0;
}

void decoder(char src[], char des[])
{
    int l = strlen(src);
    for (int i = 0; i < l; i++)
    {
        char current = src[i];
        if (isalpha(current))
        {
            if (isupper(current))
            {
                current = shiftUpper(current);
            }
            else
            {
                current = shiftLower(current);
            }
        }
        des[i] = current;
    }
    des[l] = '\0';
}

char shiftUpper(char c)
{
    return (c - 'A' + 13) % 26 + 'A';
}

char shiftLower(char c)
{
    return (c - 'a' + 13) % 26 + 'a';
}
