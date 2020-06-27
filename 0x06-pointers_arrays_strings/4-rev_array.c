#include "holberton.h"

/**
 * swap_int - Swap two integeres
 * @a: Integer
 * @b: Integer
 */
void swap_int(int *a, int *b)
{
int pe;

pe = *a;
*a = *b;
*b = pe;
}

/**
 * reverse_array - reverses the content of an array of integers
 * @a: varable to be used
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
int b;

b = 0;
while (b < n / 2)
{
swap_int(a + b, a + n - b - 1);
b++;
}
}
