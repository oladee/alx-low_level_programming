#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers
 *                  from n to 98, followed by a new line.
 * @n: value to be resolved to
 * Return: Always nothing
*/

void print_to_98(int n)
{
int b, c, d;
if (n >= 98)
{
for (; n >= 98; n--)
{
if (n == 98)
{
printf("%d, ", n);
printf("\n");
break;
}
printf("%d, ", n);
}
}
if (n <= 98)
{
for (; n <= 98; n++)
{
if (n == 98)
{
printf("%d, ", n);
printf("\n");
break;
}
printf("%d, ", n);
}
}
