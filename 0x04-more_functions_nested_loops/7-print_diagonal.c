#include "holberton.h"

/**
 * print_diagonal - prints most number followd by a new line
 * @n : parametre
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 0; i < n; i++)
{
int j;
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
