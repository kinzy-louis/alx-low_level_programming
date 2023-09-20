#include "main.h"
#include <stdlib.h>

/**
 * _abs - A function that computes the absolute value of an integer
 *
 * Return: Always 0
 *
 * @n: Parameter
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
