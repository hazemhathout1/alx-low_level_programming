#include <stdio.h>
#include <stdlib.h>
#include <main.h>


/**
 *main - Entry point Function
 *
 *Description: Function return nothing
 *
 *Return: Integer return type
 */
int main(void)
{
char x[] = "Hazem";
int c = 0;
while (x[c] != '\0')
{
putchar(x[c]);
c++;
}
return (0);
}
