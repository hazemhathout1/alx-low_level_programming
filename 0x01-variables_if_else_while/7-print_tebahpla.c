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
int i = 122;
while (i > 96)
{
putchar(i);
i--;
}
putchar('\n');
return (0);
}
