#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: first string
 * @s2: Second string
 * Return: Always string difference
*/
int _strcmp(char *s1, char *s2)
{
int index, index2, s1len, s2len, index3;
index, index2, s1len, s2len, index3 = 0;
while (*s1)
{
s1len++;
s1++;
}
while (*s2)
{
s2len++;
s2++;
}
for (index = 0; index < s1len || index < s2len; index++)
{
index3 += s1[index] - s2[index];
}
return (index3);
}
