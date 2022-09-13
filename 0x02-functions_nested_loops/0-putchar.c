#include <stdio.h>
#include "main.h"

/**
 * main - Prints _putchar with new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int str[] = {45, 112, 117, 116, 99, 104, 97, 114};
	int i, z;

	z = sizeof(str) / sizeof(int);
	for (i = 0; i < z; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
