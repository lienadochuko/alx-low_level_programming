#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar(45);
		_putchar(n);
	}
	else
	{
		_putchar(n);
	}
}
