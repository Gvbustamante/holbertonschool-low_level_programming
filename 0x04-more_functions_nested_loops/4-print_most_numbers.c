#include "holberton.h"

/**
 * print_most_numbers - prints most number followd by a new line
 */
void print_most_numbers(void)
{
char i;

for (i = 48; i <= 57; i++)
if (i != 50 && i != 52)
{
_putchar (i);
}
_putchar ('\n');
}
