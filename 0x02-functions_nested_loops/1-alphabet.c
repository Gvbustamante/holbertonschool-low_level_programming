#include "holberton.h"
/**
 * print_alphabet - use _putchar to print alphabet
 * Description: use _putchar to print a to z
 * Return: 0
 */
void print_alphabet(void)
{
int letter = 'a';
for ( ; letter <= 'z' ; letter++)
_putchar(letter);
_putchar('\n');
return;
}
