#include "main.h"
/**
 * _isupper - checks for uppercase character
 *
 * @c: argument of int data type
 *
 * Return: 1 if c is uppercase or 0 if it isn't
 **/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
