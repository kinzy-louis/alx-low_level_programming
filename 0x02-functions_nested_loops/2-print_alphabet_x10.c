#include "main.h"

/**
 * print_alphabet_x10 - A funtions that prints the alphabet x10 in lower case
 *
 * Return: Always 0 (Success)
 *
 */

void print_alphabet_x10(void)
{
	char ch;
	int c;

	for (c = 1; c <= 10; c++)
	{
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	}
}
