#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int zee;

	for (zee = '0'; zee <= '9'; zee++)
	{
		putchar(zee);
		if (zee >= '0' && zee <= '8')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
