#include "main.h"
char *_strncat(char *dest, char *src, int n)
{
int destLen, index, srcLen;
destLen = 0;
srcLen = 0;
index = 0;
while (*dest)
{
destLen++;
dest++;
}
while (*src)
{
srcLen++;
src++;
}
for(index = 0; n > srcLen; index++)
{
dest[destLen++] = src[index];
}
return (dest);
}