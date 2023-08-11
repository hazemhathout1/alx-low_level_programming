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
putchar(x);
x++;
}
x = 65;
while (x != 91)
{
putchar(x);
x++;
}
putchar('\n');
return (0);
}
