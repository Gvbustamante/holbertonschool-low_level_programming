#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int m;
int i;
srand(time(0));
n = rand() - RAND_MAX / 2;
m = n;
i = n % 10;
if (i > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", m, i);
}
if (i == 0)
{
printf("Last digit of %d is %d and is 0 is zero\n", m, i);
}
if (i < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", m, i);
}
return (0);
}
