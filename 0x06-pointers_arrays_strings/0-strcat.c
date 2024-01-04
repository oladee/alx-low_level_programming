#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: String to which appending will takes place
 * @src: String to be concatenated
 * Return: Always a pointer
*/

char *_strcat(char *dest, char *src)
{
int destLen, index;
destLen = 0;
index = 0;
while(*dest)
{
destLen++;
}
for(index = 0; *src; index++)
{
dest[destLen++] = src[index];
}
return dest;
}
