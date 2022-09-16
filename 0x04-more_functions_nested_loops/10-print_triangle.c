#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: numbers of lines.
 * Return: no return.
 */
void print_triangle(int size)
{
	int a, c;
	for (c = 0; c < size; c++)
	{
		for (a = 1; a < (size - c); a++)
			_putchar(' ');
		for (a--; a < size; a++)
			_putchar(35);
		if (c < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
