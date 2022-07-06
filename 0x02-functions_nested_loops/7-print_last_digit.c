#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: agurment of integer data type.
 *
 * Return: The last digit value
 **/
int print_last_digit(int n)
{
	n = n % 10;
	_putchar(n);
	return (n);
}
