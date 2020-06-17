#include "holberton.h"
/**
 * print_sign - the code for Holberton School students.
 * @n: is character.
 * Return:  0 if is 0, -1 if < 0, 1 if > 0.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n < 0)
{
_putchar('-');
return (-1);
}
_putchar('0');
return (0);
}
