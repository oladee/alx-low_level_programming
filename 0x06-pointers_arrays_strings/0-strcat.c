#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: String to which appending will takes place
 * @src: String to be concatenated
 * Return: Always a pointer
*/

char *_strcat(char *dest, char *src)
{
char *dee, *dee2;
char *dee3;
dee = dest;
dee3 = src;
while(*dee != '\0')
{
if(*dee == '\0')
{
while (*dee3)
{
*dee2 += *dee3;
dee3++;
}
}
else
{
*dee2 += *dee;
dee++;
}
}
*dest = *dee2;
return *dee2;
}