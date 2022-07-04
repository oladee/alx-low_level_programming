#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int dee;

	for (dee = 'z'; dee >= 'a'; dee--)
		putchar(dee);
	putchar('\n');
	return (0);
}
