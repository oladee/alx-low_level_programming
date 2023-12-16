#include <stdio.h>

/**
 * main - prints all possible different
 *          combinations of two digits
 * Return: Always 0
*/

int main(void)
{
int dee, cee;
for (dee = 0; dee < 9; dee++)
{
for (cee = dee + 1; cee < 10; cee++)
{
putchar((dee % 10) + '0');
putchar((cee % 10) + '0');
if (cee == 9 && dee == 8)
{
continue;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
