#include "mian.h"

/**
 * print_numbers - Prints the numbers followed by new line.
 * Return: no return.
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
