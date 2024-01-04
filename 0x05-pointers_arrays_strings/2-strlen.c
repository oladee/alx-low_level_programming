#include "main.h"

/**
 * _strlen- function that returns the length of a string.
 * @s: pointer to char
 * Return: Always the string length
*/

int _strlen(char *s)
{
char *d;
int final;
d = s;
while(*d)
{
d++;
}
final = d - s;
return final;
}
