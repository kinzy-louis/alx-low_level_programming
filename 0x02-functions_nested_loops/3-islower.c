#include "main.h"
#include <ctype.h>

/**
 * _islower - A function that checks for lowercase character
 *
 * c - A c function
 *
 * Return: Always 0 (Success)
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
