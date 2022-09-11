#include <stdio.h>

/**
 * main - print lowercase reverse
 *
 * Return - Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "zyxwvutsrqponmlkjihgfedcba";
	int ch;

	for (ch = 0; ch > 26; ch++)
	{
		putchar(alp[ch]);
	}
	putchar('\n');
	return (0);
}
