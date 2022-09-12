#include <stdio.h>

/**
 * main - prints base16 numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(i);
	}

	for (i = 10; i < 15; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
