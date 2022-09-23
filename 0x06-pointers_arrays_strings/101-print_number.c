#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		m = n;
		_putchar(45);
		_putchar(m);
	}
	else
	{
		m = n;
		_putchar(m);
	}
	_putchar('\n');
}
