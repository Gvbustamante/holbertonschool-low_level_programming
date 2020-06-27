#include "holberton.h"

/**
 * puts_half - prints half of a string followed by
 * a new line
 * @str: the string to be printed
 */
void puts_half(char *str)
{
int n;
int len;
len = 0;
for (n = 0; str[n] != '\0'; n++)
{
len++;
}
for (n = (len + 1) / 2; n < len; n++)
{
_putchar(str[n]);
}
_putchar('\n');
}
