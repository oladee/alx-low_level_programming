#include <stdio.h>

/**
 * main - prints all possible different combinations
 *          of three digits. Numbers
 *          must be separated by ,, followed by a space
 * Return: Always 0
*/

int main(void)
{
int dee, cee, bee;
for (dee = 0; dee < 8; dee++)
{
for (cee = dee + 1; cee < 9; cee++)
{
for (bee = cee + 1; bee < 10; bee++)
{
putchar((dee % 10) + '0');
putchar((cee % 10) + '0');
putchar((bee % 10) + '0');
if (dee == 7 && cee == 8 && bee == 9)
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
