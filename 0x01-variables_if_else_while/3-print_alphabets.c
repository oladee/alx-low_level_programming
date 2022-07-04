#include <stdio.h>
/**
 * main - Entry Point
 *
 * putchar - prints string out
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	int a;
	int b;

	for (a = 'a'; a <= 'z' && a != 'c'; a++)
	{
		putchar(a);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
