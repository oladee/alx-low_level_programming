#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal.
 * @n: number of dashes to be drawn
 * Return: Always nothing
*/

void print_diagonal(int n)
{
int b;
if (n > 0)
{
for (b = 0; b < n; b++)
{
_putchar(' ');
}
}
_putchar('92');
_putchar('\n');
}
