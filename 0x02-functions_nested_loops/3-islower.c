#include "main.h"

/**
 * _islower - check for lowercase character.
 *
 * @c: The character is in ASCII code
 *
 * Return: 1 for lowercase Character. 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
