#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - proof 8
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 48;
while (a < 58)
{
putchar(a);
if (a != 57)
{
putchar(',');
putchar(' ');
}
a = (a + 1);
}
putchar('\n');
return (0);
}
