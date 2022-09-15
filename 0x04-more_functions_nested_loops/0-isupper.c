#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if variable is an uppercase character.
 * @c: input character.
 * Return: 1 if it is an uppercase character, 0 for the rest.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
