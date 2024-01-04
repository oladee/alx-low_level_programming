#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: first string
 * @src: second string
 * @n: number of byte to be added
 * Return: Always the pointer to the string
*/
char *_strncat(char *dest, char *src, int n)
{
int destLen, index;
destLen = 0;
index = 0;
while (dest[index++])
{
destLen++;
}
for (index = 0; index < n && src[index]; index++)
{
dest[destLen++] = src[index];
}
return (dest);
}
