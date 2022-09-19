#include "main.h"

/**
 * rev_string - reverse a string.
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
		for (t = c + 1; t  > 0; t--)
		{
			temp = *(str + t);
			*(str + t) = *(str + (t - 1));
			*(str + (t - 1)) = temp;
		}
	}
}
