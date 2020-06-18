#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet, ten times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int a, letter;
for (a = 0; a < 10; a++)
{
for (letter = 97; letter < 123; letter++)
{
_putchar(letter);
}
_putchar('\n');
}

	return;

}
