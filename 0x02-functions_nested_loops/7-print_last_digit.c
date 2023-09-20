#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - A function that prints last digit of a number
 *
 * Return: Always 0
 *
 * @d:
 *
 */

int print_last_digit(int d)
{
	int lastdigit = d % 10;

	_putchar('0' + lastdigit);
	_putchar('\n');

	return (0);
}
