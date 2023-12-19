#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @c: value to be evaluated
 * Return: Always last digit of the value
*/
int print_last_digit(int c)
{
int d;
if ( c < 0)
{
d = c % 10;
d *= -1;
}
else
{
d = c % 10;
}
_putchar(d + '0');
return (d);
}
