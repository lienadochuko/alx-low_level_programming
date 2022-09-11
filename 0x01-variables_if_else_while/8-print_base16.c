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

	for (ch = 0; ch < 6; ch++)
	{
		putchar(alp[ch]);
	}

	for (i = 0; i < 9; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
