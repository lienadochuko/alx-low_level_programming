#include "main.h"

/**
 * print_square - Prints a square followed by new line.
 * @size: size of the square.
 * Return: no return.
 */
void print_square(int size)
{
	int c, a;

	for (c = 0; c < size; c++)
	{
		for (a = 0; a < c; a++)
		{
			_putchar(35);
		}
		if (c != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
