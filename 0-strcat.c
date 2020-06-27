#include "holberton.h"

/**
 * *_strcat - concatenates two strings
 * @src: variable containing string to be concatenated
 * @dest: variable containing string to be concatenated to
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{

int c = 0;
int d = 0;
while (dest[c] != '\0')
{
c++;
}

while (src[d] != '\0')
{
dest[c] = src[d];
d++;
c++;
}

dest[c] = '\0';

return (dest);
}
