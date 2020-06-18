#include "holberton.h"
/**
 * function that checks for lowercase character.
 * Description: created of fuction _islower 'c'
 * Return: one
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
