#include "holberton.h"

/**
 * more_numbers - prints most number followd by a new line
 */
void more_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
int num = '0';
int diez = 0;
int j;
for (j = 0; j < 14; j++)
{
if (diez == 1)
{
_putchar('1');
}
_putchar(num);
if (num == '9')
{
num = '0';
diez = 1;
}
num++;
}
_putchar('\n');
}
}
