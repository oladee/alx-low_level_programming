#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @c: value to be evaluated
 * Return: Always last digit of the value
*/
int print_last_digit(int c)
{
int d;
d = c % 10;
_putchar(d);
return (d);
}
