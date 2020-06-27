#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array followd by
 * a new line
 * @n: variable to be used
 * @a: variable to be used
 */
void print_array(int *a, int n)
{
int elmt;

for (elmt = 0; elmt < n; elmt++)
{
printf("%d", a[elmt]);
if (elmt < n - 1)
{
printf(", ");
}
}
printf("\n");
}
