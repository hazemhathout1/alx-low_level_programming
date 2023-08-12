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
int i = 48;
while (i < 58)
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}
