#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: Always nothing
*/
void times_table(void)
{
int i,j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
_putchar((i * j) + '0');
if (j == 9)
{
continue;
}
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
