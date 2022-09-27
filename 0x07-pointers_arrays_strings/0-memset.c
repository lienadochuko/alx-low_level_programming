#include "main.h"

/**
 * _memset - Fills first n bytes of memory.
 * @s: A pointer to the memory area to filled.
 * @b: The character to fill the memory area.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i < n; i++)
		*(s + i) = b;
	
	return (s);
}
