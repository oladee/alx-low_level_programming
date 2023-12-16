#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 *          The numbers should range from 0 to 99
 * Return: Always 0
*/

int main(void)
{
int dim, nkm;
for (dim = 0; dim < 99; dim++)
{
for (nkm = dim + 1; nkm < 100; nkm++)
{
putchar((dim / 10) + '0');
putchar((dim % 10) + '0');
putchar(' ');
putchar((nkm / 10) + '0');
putchar((nkm % 10) + '0');
if (dim == 98 && nkm == 99)
{
continue;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
