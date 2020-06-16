#include "holberton.h"
/**
 * print_alphabet - use _putchar to print alphabet
 * Description: use _putchar to print a to z
 * Return: 0
 */
void print_alphabet(void)
{
int alpha = 'a';
for ( ; alpha <= 'z' ; alpha++)
_putchar(alpha);
_putchar('\n');
return;
}
