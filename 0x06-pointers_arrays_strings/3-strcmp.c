#include "holberton.h"

/**
 * _strcmp - compare two strings
 * @s1: string one
 * @s2: string two
 * Return: returns an integer less  than,  equal  to,  or
 * greater  than zero if s1 is found, respectively, to be
 * less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
char *p1 = s1;
char *p2 = s2;

while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
{
p1++;
p2++;
}
return (*p1 - *p2);
}
