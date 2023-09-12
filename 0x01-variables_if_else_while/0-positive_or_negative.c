#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Positive anything
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("The value of: %d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("The value of: %d is zero\n", n);
	}
	else
	{
	printf("The value of: %d is negative\n", n);
	}
	return (0);
}
