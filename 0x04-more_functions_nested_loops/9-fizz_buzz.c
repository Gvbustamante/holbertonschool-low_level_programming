#include <stdio.h>
/**
 * main - this program prints the word fizz for multiples of 3, the word.
 * Return: 0
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
int mul3 = (i % 3);
int mul5 = (i % 5);
if (mul3 == 0 && mul5 == 0)
{
printf("FizzBuzz");
}
else
{
if (mul3 == 0 && mul5 != 0)
{
printf("Fizz");
}
else
{
if (mul3 != 0 && mul5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}
}
}
if (i < 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
