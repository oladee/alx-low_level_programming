#include "main.h"
#include <stdio.h>

/**
 * main - Fizz-Buzz test
 * Return: Always 0
*/

int main(void)
{
int a;
for (a = 1; a < 101; a++)
{
if (a % 5 == 0 && a % 3 == 0)
{
printf("FizzBuzz ");
continue;
}
if (a % 5 == 0)
{
printf("Buzz ");
}
if (a % 3 == 0)
{
printf("Fizz ");
}
else if (a % 5 != 0 && a % 3 != 0)
{
printf("%d ", a);
}
}
printf("\n");
return (0);
}
