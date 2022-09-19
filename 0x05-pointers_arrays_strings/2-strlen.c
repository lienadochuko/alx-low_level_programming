#include "main.h"

/**
 * _strlen - returns length of a string.
 * @s: input string.
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int size = 0;

	while (*(s + size) != '\0')
		size++;
	return (size);
}
