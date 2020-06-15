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
int b = 48;
while (b < 58)
{
putchar(a);
putchar(b);
if (a != 57 || b != 57)
{
putchar(',');
putchar(' ');
}
b = (b + 1);
}
a = (a + 1);
}
putchar('\n');
return (0);
}
