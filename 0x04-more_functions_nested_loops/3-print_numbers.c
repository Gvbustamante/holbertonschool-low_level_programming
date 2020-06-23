#include "holberton.h"
/**
 * print_numbers - checks for uppercase letters
 * Return: 1 if uppercase and, 0 otherwise
 */
void print_numbers(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
}
putchar('\n');
}
