#include <stdio.h>

/**
 * main - A program that prints the alphabets in lower case
 *
 * Return: Always 0 (Success)
 *
 */

int main (void)
{
	char ch = 97;
	while (ch < 122)
	{
		putchar("%c\n", ch);
		ch++;
	}
	return (0);
}
