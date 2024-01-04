#include "main.h"

/**
 * _puts - prints a string, followed by a new
 *          line, to stdout.
 * @str: pointer to string
 * Return: Always Nothing
*/
void _puts(char *str)
{
char *d;
d = str;
while(*d)
{
_putchar(*d);
d++;
}
_putchar('\n');
}
