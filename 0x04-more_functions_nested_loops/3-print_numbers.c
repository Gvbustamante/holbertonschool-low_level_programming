#include "holberton.h"
/**
 * print_numbers - Write a function that prints the numbers, from 0 to 9,
 * Return: none
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
