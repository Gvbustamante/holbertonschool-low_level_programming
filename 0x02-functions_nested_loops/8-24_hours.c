#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
int h, m, i, j, k, l;
for (h = 0 ; h < 24; h++)
for (m = 0; m < 60; m++)
{
i = h / 10;
j = h % 10;
k = m / 10;
l = m % 10;
_putchar(i + '0');
_putchar(j + '0');
_putchar(':');
_putchar(k + '0');
_putchar(l + '0');
_putchar('\n');
}
}
