#include "main.h"
/**
 * print_alphabet_x10 -  prints ten times the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: Always void (Success)
 **/
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
