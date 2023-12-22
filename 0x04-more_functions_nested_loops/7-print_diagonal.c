#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal.
 * @n: number of dashes to be drawn
 * Return: Always nothing
*/

void print_diagonal(int n)
{
int b, c;
if (n > 0)
{
for (b = 0; b < n; b++)
{
for (c = 0; c < b; c++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
