#include "main.h"
/**
 * print_alphabet -  function that prints the alphabet, in lowercase,
 * followed by a new line
 *
 * Return: Always void (Success)
 **/
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
