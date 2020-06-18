#include "holberton.h"

/**
 * times_table - prints times table up to 9
 *
 * Return: Always 0.
 */
void times_table(void)
{
int r, d, m, n, p, s;
for (m = 0; m < 10; m++)
{
for (n = 0; n < 10; n++)
{
r = m * n;
d = m * (n + 1);
p = r / 10;
s = r % 10;
if (r >= 10)
{
_putchar(p + '0');
_putchar(s + '0');
}
else
{
_putchar(r + '0');
}
if (d >= 10 && n != 9)
{
_putchar(',');
_putchar(' ');
}
else if (n != 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
_putchar('\n');
}
}
