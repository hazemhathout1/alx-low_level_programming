#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - Entry point Function
 *
 *Description: Function return nothing here
 *
 *Return: 0 Always
 */
int main(void)
{
int x = 97;
while (x != 123)
{
if (x == 101 || x == 113)
{
x++;
continue;
}
putchar(x);
x++;
}
return (0);
}
