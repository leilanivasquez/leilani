#include <stdio.h>
#include <string.h>

int stringLen(char[]);

int main()
{
    char st[] = "Hello";
    puts(st);
    int s = stringLen(st);
    printf("SIZE %d , SIZEOF %lu\n", s, sizeof(st));
    return 0;
}

int stringLen(char st[])
{
    int count = 0;
    char* current;
    current = &st[0];
    printf("%p, %p\n", st, current);
    while(*current != '\0')
   {
        printf("%c @ %p\n", *current, current);
        current++;
        count++;
   }
   return count;
}