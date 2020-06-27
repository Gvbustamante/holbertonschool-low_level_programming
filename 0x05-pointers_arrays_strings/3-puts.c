#include "holberton.h"

/**
 * _puts - prints a string followed by a new line
 * @str: variable that contains the string
 */
void _puts(char *str)
{
int a;

a = 0;
while (str[a] != '\0')
{
_putchar(str[a]);
a++;
}
_putchar('\n');
}
