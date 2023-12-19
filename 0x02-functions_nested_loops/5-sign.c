#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: parameter to be checked
 * Return: 1 if the number is positive
 *          0 if n is zero and -1 is negative
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar(0 + '0');
return (0);
}
}
