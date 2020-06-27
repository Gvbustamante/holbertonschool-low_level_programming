#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: varibale where final string will be stored
 * @src: variable where string to be added will be stored
 * @n: variable containing the limit of bytes to be used
 * Return: *ptrdes
 */
char *_strncat(char *dest, char *src, int n)
{
  int c;
  int d;

  c = 0;
  d = 0;

while (dest[c] != '\0')
{
c++;
}
while (src[d] != '\0' && src_c < n)
{
dest[c] = src[d];
d++;
c++;
}
dest[c] = '\0';

return (dest);
}
