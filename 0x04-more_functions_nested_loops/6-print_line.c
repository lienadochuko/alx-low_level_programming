#include "main.h"

/**
 * print_line - prints straight line.
 * @n: times straight line is printed.
 * Return: no return.
 */
void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
