#include "main.h"

/**
 * print_rev- prints a string, in reverse, followed by a new line.
 * @s: pointer to string
 * Return: Always nothing
*/

void print_rev(char *s)
{
char *d;
int final;
d = s;
while (*d)
{
d++;
}
while (*d)
{
_putchar(*d);
d--;
}
_putchar('\n');
}
