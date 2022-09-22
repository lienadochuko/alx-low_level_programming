#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, c = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (c >= 0)
	{
		*(dest + i) = *(src + c);
		if (*(src + c) == '\0')
			break;
		i++;
		c++;
	}
	return (dest);
}
