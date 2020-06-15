#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 48;
while (a < 58)
{
putchar(a);
a = (a + 1);
}
int b = 97;
while (b < 103)
{
putchar(b);
b = (b + 1);
}
putchar('\n');
return (0);
}
