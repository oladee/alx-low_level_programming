#include "main.h"
char *_strncat(char *dest, char *src, int n)
{
int destLen, index, srcLen, index2;
destLen = 0;
srcLen = 0;
index = 0;
index2 = 0;
while (dest[index++])
{
destLen++;
}
while (src[index2++])
{
srcLen++;
}
for(index = 0; index <= n; index++)
{
dest[destLen++] = src[index];
}
return (dest);
}