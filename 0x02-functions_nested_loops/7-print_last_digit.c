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
	int dee = n % 10;

	if (dee < 0)
	{
		dee *= -1;
		return (dee);
	}
	else
	return (dee);
}
