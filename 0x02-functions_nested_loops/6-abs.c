#include "main.h"
/**
 * _abs - function computes the absolute value of an integer.
 *
 * @n: specifies the argument to be of integer data type
 *
 * Return: Always 0 (Success)
 **/
int _abs(int n)
{
	if (n < '0')
	{
		n *= -1;
		_putchar(n);
		return (n);
	}
	else
	{
		_putchar(n);
		return (n);
	}
}
