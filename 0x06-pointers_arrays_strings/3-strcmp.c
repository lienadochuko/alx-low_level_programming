#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if s1 and s2 are equal,
 * else another number if not.
 */
int _strcmp(char *s1, char *s2)
{
	int c = 0, i = 0;

	while (i == 0)
	{
		if ((*(s1 + c) == '\0') && (*(s2 + c) == '\0'))
			break;
		i = *(s1 + c) - *(s2 + c);
		c++;
	}

	return (i);
}
