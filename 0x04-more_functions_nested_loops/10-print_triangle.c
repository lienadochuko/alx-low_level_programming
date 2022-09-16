#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: numbers of lines.
 * Return: no return.
 */
void print_triangle(int size)
{
	int i, a;
	
	for (i = 0; i < size; i++)
	{
		for (a = 1; a < (size - i); a++)
			_putchar(' ');
		for (a--; a < size; a++)
			_putchar(35);
		if (i < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
