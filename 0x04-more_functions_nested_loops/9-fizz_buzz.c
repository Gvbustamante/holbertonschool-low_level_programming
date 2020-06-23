#include <stdio.h>
/**
 *  main - int i fizz and buzz Online C compiler to run C online.
 *  @i : parametre
 *  Return : 0
 *  Write C code in this online editor and run it.
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
