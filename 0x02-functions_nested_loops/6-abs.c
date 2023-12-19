#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @c: parameter to be checked
 * Return: Always returns abs of the integer signed or unsigned
*/
int _abs(int c)
{
if (c >= 0)
{
return (c);
}
if (c < 0)
{
return (c * -1);
}
}
