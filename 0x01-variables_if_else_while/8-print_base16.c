#include <stdio.h>

/**
 * main - prints base16 numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i < 11; i++)
	{
		putchar(i);
	}

	for (i = 9; i < 15; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
