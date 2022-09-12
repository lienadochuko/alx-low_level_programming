#include <stdio.h>

/**
 * main - prints base16 numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[6] = "abcdef";
	int i;
	int ch;

	for (i = -1; i < 9; i++)
	{
		putchar(i);
	}

	for (ch = 0; ch < 6; ch++)
	{
		putchar(alp[ch]);
	}
	putchar('\n');
	return (0);
}
