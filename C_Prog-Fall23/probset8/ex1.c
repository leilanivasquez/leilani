#include <stdio.h>
#include <string.h>

int stringLen(char[]);
int abc(char[]);


int main()
{
    char st[100] = "cot";
    puts(st);
    int s = stringLen(st);
    printf("SIZE %d , SIZEOF %lu\n", s, sizeof(st));


    int v = abc("cot");
    printf("%d\n", v);

    return 0;
}
int abc(char st[])
{

    char* current;
    current = &st[1];

    int isAbc = 1;

    while(*current != '\0' && isAbc)
    {
        if(*current < *(current-1))
        {
            isAbc = 0;
        }
        current++;
    }
    return isAbc;

}



int stringLen(char st[])
{
    int count = 0;
    char* current;
    current = &st[0];  //current = st;

   // printf("%p, %p\n", st, current);

    while(*current != '\0')
    {
        //printf("%c @ %p\n", *current, current);
        current++;
        count++;
    }
    return count;

}