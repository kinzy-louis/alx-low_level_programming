#include "main.h"

/**
 * print_alphabet - A program that prints the alphabet, in lower case
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	_putchar(ch);
	}
	_putchar('\n');
}

