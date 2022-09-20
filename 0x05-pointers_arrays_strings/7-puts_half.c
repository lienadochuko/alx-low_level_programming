#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */
void puts_half(char *str)
{
	int i = 0, c;

	while (i >= 0)
	{
		if (str[i] == '\0')
			break;
		i++;
	}

	if (i % 2 == 1)
		c = i / 2;
	else
		c = (i - 1) / 2;
	for (c++; c < i; c++)
		_putchar(str[c]);
	_putchar('\n');
}
