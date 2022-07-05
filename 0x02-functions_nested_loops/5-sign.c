#include "main.h"
/**
 * print_sign - prints the sign of a number.
 *
 * @n: int argument that checks for positivity
 *
 * Return: 1 if its positive and greater than zero
 * , 0 if the value is zero
 * 1 if its less than zero
 **/
int print_sign(int n)
{
	if (n > '0')
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
