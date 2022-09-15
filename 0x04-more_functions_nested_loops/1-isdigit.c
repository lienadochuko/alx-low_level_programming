#include "main.h"

/**
 * _isdigit - checks for a digit.
 * @c: input digit.
 * Return: 1if it is a digit, 0 in other cases.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
