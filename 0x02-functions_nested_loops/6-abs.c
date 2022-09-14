#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @i: inputer number as an integer.
 *
 * Return: absolute value
 */
int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return (r * -1);
	}
}
