#include <stdio.h>

/**
 * main - prints the size of various
 *          types on the computer it is
 *          compiled and run on.
 * Return: Always 0
*/
int main(void)
{
char n;
int m;
long int l;
long long int o;
float p;
printf("Size of a char: %ld byte(s)\n", sizeof(n));
printf("Size of an int: %ld byte(s)\n", sizeof(m));
printf("Size of a long int: %ld byte(s)\n", sizeof(l));
printf("Size of long long int: %ld byte(s)\n", sizeof(o));
printf("Size of a float: %ld byte(s)\n", sizeof(p));
}
