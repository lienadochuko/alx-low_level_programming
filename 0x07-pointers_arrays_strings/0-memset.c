#include "main.h"

/**
 * _memset - fills the first n bytes of ,
 * the memory.
 * @s: a pointer to the memory area to fill.
 * @b: the character to fill the memory.
 * @n: the number of bytes to be filled.
 *
 * Return: a pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i < n; i++)
		*(s + i) = b;
	
	return (s);
}
