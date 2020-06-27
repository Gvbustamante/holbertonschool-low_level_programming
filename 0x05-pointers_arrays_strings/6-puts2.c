#include "holberton.h"

/**
 * puts2 - prints every other character of a string staring with
 * the first character
 * @str: the variable containing the string
 */
void puts2(char *str)
{
int len;

len = 0;
while (str[len] != '\0')
{
if (len % 2 == 0)
_putchar(str[len]);
len++;
}
_putchar('\n');
}
