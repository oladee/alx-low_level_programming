#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 *          followed by a new line.
 * Return: Always 0
*/

int main(void)
{
int a;
char c;
for (a = 0; a < 10; a++)
{
putchar(a + '0');
}
for (c = 'a'; c < 'g'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
