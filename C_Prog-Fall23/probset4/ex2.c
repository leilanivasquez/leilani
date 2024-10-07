/*Leilani Vasquez- 00292291
This program prints a statment as well as shows the order in which each statement is called

#include <stdio.h>
#include <stdlib.h>
void zippo (int, int);
void baffle (int);
int main (void)
{
1. zippo (5, 13);
8. return EXIT_SUCCESS;
}
void baffle (int output)
{
4. printf ("%i\n",output);
5. zippo (12, -5);
}
void zippo (int quince, int flag)
{
if (flag < 0)
{
6. printf ("%i zoop\n", quince);
}
else
{
2. printf ("rattle ");
3. baffle (quince);
7. printf ("boo-wa-ha-ha\n");
}
}
*/

#include <stdio.h>
#include <stdlib.h>
void zippo (int, int);
void baffle (int);
int main (void)
{
zippo (5, 13);
return EXIT_SUCCESS;
}
void baffle (int output)
{
printf ("%i\n",output);
zippo (12, -5);
}
void zippo (int quince, int flag)
{
if (flag < 0)
{
printf ("%i zoop\n", quince);
}
else
{
printf ("rattle ");
baffle (quince);
printf ("boo-wa-ha-ha\n");
}
}