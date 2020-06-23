#include "holberton.h"

/**
 * print_triangle - prints size
 * @size: tamaño
 * return : none
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int cant = 1;
int i;
for ( i = 0; i < size; i++)
{
int j;
for (j = 0; j < (size-cant); j++)
{
_putchar(' ');
}
int k;
for (k = 0; k < cant; k++)
{
_putchar('#');
}
cant++;
_putchar('\n');
}
}
}
