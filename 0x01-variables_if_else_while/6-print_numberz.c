#include <stdio.h>

/**
 * main - prints all single digit numbers
 *          of base 10 starting from 0, followed by a new line.
 *          You are not allowed to use any variable of type char
 * Return: Always 0
*/

int main(void)
{
int c;
for (c = 0; c < 10; c++)
{
putchar(c + '0');
}
putchar('\n');
return (0);
}
