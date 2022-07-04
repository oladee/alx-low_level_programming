#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int p, q;

	for (p = '0'; p <= '9'; p++)
		putchar(p);
	for (q = 'a'; q <= 'f'; q++)
		putchar(q);
	putchar('\n');
	return (0);
}
