#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: destination.
 * @src:source.
 * @n:amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, c = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (c < n)
	{
		*(dest + i) = *(src + c);
		if (*(src + c) == '\0')
			break;
		i++;
		c++;
	}
	return (dest);
}
