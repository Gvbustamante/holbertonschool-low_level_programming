#include "holberton.h"

/**
 * *_strcpy - copies a string pointed to by src to dest
 * @src: variale where string will be copied from
 * @dest: variable that string will be copied to
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int p;

for (p = 0; src[p] != '\0'; p++)
{
dest[p] = src[p];
}
dest[p] = '\0';
return (dest);
}
