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
 * cap_string - changes lowercase to uppercase of beginning of word
 * @s: string to be changed
 * Return: str
 */
char *cap_string(char *s)
{
int e;
int j;

char sym[13] = {' ', '\t', '\n', ',', ';', '.',
'!', '?', '"', '(', ')', '{', '}'};

for (e = 0; s[e] != '\0'; e++)
{
if (e == 0 && _isalphalower(s[e]))
s[e] -= 32;

for (j = 0; j < 13; j++)
{
if (s[e] == sym[j])
{
if (s[e + 1] >= 'a' && s[e + 1] <= 'z')
{
s[e + 1] -= 32;
}
}
}
}

return (s);
}
