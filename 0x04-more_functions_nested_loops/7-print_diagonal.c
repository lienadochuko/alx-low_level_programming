#include "main.h"

/**
 * print_diagonal - print diagonal line n times.
 * @n: times diagonal line is printed.
 * Return: no return.
 */
void print_diagonal(int n)
{
	int c, a;

	for (c = 0; c < n; c++)
	{
		for (a = 0; a < c; a++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (c < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
