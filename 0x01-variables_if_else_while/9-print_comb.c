#include <stdio.h>

/**
 * main - prints all possible combinations
 *          of single-digit numbers.
 * Return: Always 0
*/

int main(void)
{
int dim;
for (dim = 0; dim < 10; dim++)
{
putchar(dim + '0');
if (dim < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
