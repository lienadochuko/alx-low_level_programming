#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, set status value equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *snout;
	unsigned int a, b, 1snout, c;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	if (n > b)
		n = b;

	1snout = a + n;

	snout = malloc(1snout + 1);

	if (snout == NULL)
		return (NULL);

	for (c = 0; c < 1snout; c++)
		if (c < a)
			snout[c] = s1[c];
		else
			snout[c] = s2[c - a];
	snout[c] = '\0';

	return (snout);
}
