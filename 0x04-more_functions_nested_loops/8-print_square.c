#include "main.h"

/**
 * print_square -  prints a square, followed by a new line.
 * @size: number of squares and lines to be given
 * Return: Always nothing
*/

void print_square(int size)
{
int x, y;
for (x = 0; x < size; x++)
{
for (y = 0; y < size; y++)
{
_putchar('#');
}
_putchar('\n');
}
return;
}