#include "holberton.h"

/**
 * _isalphalower - checks for lowercase or uppercase character
 * @c: the character to check
 * Return: 1 if c is lowercase or uppercase, 0 otherwise
 */
int _isalphalower(int c)

{
return (c >= 'a' && c <= 'z');
}

/**
 * string_toupper - changes lowercase to uppercase
 * @str: string to be changed
 * Return: str
 */
char *string_toupper(char *str)
{
int pos;

for (pos = 0; str[pos] != '\0'; pos++)
{
if (_isalphalower(str[pos]))
{
str[pos] = str[pos] - 32;
}
}
return (str);

}
