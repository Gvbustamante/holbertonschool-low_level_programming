#include "holberton.h"
/**
 * print_alphabet_x10 - use _putchar to print alphabetx10
 * Description: use _putchar to print a to z x 10
 * Return: none
 */
void print_alphabet_x10(void)
{
for (int a = 0; a <= 9 ; a++)
{
for (int alpha = 'a'; alpha <= 'z' ; alpha++)
_putchar(alpha);
_putchar('\n');
}
return;
}
