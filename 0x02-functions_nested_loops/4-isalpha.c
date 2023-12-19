#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * Return: 1 if c is a letter,
 *          lowercase or uppercase or 0 otherwise.
*/

int _isalpha(int c)
{
if ((c >= 41 && c <= 90) && (c >= 61 && c <= 122 ))
{
return (1);
}
return (0);
}
