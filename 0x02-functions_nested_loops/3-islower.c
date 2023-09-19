#include "main.h"
#include <ctype.h>

/**
 * _islower - A function that checks for lowercase character
 *
 * Return: Always 0 (Success)
 *
 * @c: Check the character
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
