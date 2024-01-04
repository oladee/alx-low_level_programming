#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: destination string;
 * @src: string to be copied;
 * @n: Number of bytes to be copied
 * Return: Always return pointer to string
*/

char *_strncpy(char *dest, char *src, int n)
{
int index;
for (index = 0; index < n && src[index]; index++)
{
dest[index] = src[index];
}
for (;index < n; index++)
{
dest[index] = '\0';
}
return (dest);
}
