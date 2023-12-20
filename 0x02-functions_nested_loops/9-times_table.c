#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: Always nothing
*/
void times_table(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
int k, l, m;
k = i * j;
if (k > 9)
{
l = k % 10;
m = (k - l) / 10;
_putchar(',');
_putchar(' ');
_putchar(m + '0');
_putchar(l + '0');
}
else
{
if (j != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
    
_putchar(k + '0');

}
}
_putchar('\n');
}
}
