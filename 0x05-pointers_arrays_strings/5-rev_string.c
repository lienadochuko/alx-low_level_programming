#include "main.h"

/**
 * re_string - reverse a string.
 * @s: input string.
 * Return: nor return.
 */
void rev_string(char *s)
{
	int i = 0, c, t;
	char *str, temp;

	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		i++;

	}
	str = s;

	for (c = 0; c < (i - 1); c++)
	{
		for (j = c + 1; j  > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
