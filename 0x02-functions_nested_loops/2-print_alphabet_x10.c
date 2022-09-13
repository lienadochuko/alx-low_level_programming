#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int ch, i;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 97; ch <= 122; ch++)
		{
			_putchar(ch);
		}
	_putchar('\n');
	}
}
