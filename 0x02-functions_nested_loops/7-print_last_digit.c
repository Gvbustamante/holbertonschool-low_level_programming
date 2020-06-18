#include "holberton.h"

/**
 * print_last_digit - return last number
 *
 * @n: int to put number and find the last numert
 * Return: Number.
 */
int print_last_digit(int n)
{
int l, p;
l = n % 10;
if (l < 0)
l = -1 * l;
p = '0' + l;
_putchar(p);
return (l);
}
