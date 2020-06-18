#include "holberton.h"
/**
 * main - use _putchar
 * Description: use _putchar to print holberton
 * Return: 0
 */
int main(void)
{
char vectores[] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
int z, i;
z = sizeof(vectores);
for (i = 0 ; i < z; i++)
_putchar(vectores[i]);
_putchar('\n');
return (0);
}
