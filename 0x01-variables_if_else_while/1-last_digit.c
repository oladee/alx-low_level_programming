#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int n;
	int dee;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	dee = n % 10;
	if (dee > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, dee);
	} else if (dee == 0)
	{
		printf("Last digit of %d is %d and is 0 \n", n, dee);
	} else if (dee < 6 && dee != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0 \n", n, dee);
	}
	return (0);
}
