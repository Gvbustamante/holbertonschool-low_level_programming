#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: variable where string will be copied
 * @src: variable that will provide the string
 * @n: size limit of bytes that can be coppied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int a;

a = 0;
while (src[a] != '\0' && a < n)
{
dest[a] = src[a];
a++;
}
while (a < n)
{
dest[a] = '\0';
a++;
}
return (dest);
}
