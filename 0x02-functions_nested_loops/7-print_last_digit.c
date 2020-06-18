#include "holberton.h"
/**
 * print_last_digit - check the code for Holberton School students.
 * @r : i
 * Return: Always i.
 */
int print_last_digit(int r)
{
int i = r;
if (r < 0)
{
i = (r * -1);
}
int j = i % 10;
int k = j + 48;
_putchar(k);
return (k);
}
