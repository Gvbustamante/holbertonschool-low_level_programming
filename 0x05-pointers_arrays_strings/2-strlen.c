#include "holberton.h"

/**
 * _strlen - returns a string
 * @s: integer to be used
 * Return: length of string
 */
int _strlen(char *s)
{
int a;

a = 0;
while (s[a] != '\0')
{
a++;
}
return (a);
}
