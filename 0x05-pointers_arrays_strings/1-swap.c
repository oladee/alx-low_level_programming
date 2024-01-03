#include "main.h"

/**
 * swap_int- swap values of two variables
 * 
 * @a: first variable
 * @b: second variable
 * 
 * Return: Always void
*/

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
