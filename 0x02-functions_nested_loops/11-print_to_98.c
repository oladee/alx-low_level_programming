#include "main.h"

/**
 * print_to_98 - prints all natural numbers
 *                  from n to 98, followed by a new line.
 * @n: value to be resolved to
 * Return: Always nothing
*/

void print_to_98(int n)
{
int b, c, d;
if (n > 98)
{
for (b = n; b >= 98; b--)
{
c = b % 10;
d = (b - c) / 10;
_putchar(d + '0');
_putchar(c + '0');
if (b == 98)
{
break;
}
_putchar(',');
_putchar(' ');
}
}
if (n < 98)
{
for (b = n; b <= 98; b++)
{
c = b % 10;
d = (b - c) / 10;
_putchar(d + '0');
_putchar(c + '0');
if (b == 98)
{
break;
}
_putchar(',');
_putchar(' ');
}
}
if (n == 98)
{
c = n % 10;
d = (n - c) / 10;
_putchar(d + '0');
_putchar(c + '0');
}
}
