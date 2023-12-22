#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: number of dashes to be drawn
 * Return: Always nothing
*/

void print_line(int n)
{
int b;
if (n > 0)
{
for (b = 0; b < n; b++)
{
_putchar('_');
}
}
_putchar('\n');
return;
}
