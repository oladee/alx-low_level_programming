#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: value to which time table should be generated to
 * Return: ALways Nothing
*/
void print_times_table(int n)
{
int a, b, c, d, e, f;
if ( n >= 0 && n < 15)
{
for (a = 0; a <= n; a++)
{
for (b = 0; b <= n; b++)
{
c = a * b;
if (c > 99)
{
d = c % 10;
e = (c / 10) % 10;
f = c / 100;
_putchar(',');
_putchar(32);
_putchar(f + '0');
_putchar(e + '0');
_putchar(d + '0');
}
else if (c > 9)
{
_putchar(',');
_putchar(32);
_putchar(32);
_putchar(((c / 10) % 10) + '0');
_putchar((c % 10) + '0');
}
else
{
if (b != 0)
{
_putchar(',');
_putchar(32);
_putchar(32);
_putchar(32);
}
_putchar(c + '0');
}
}
_putchar('\n');
}
}
}
