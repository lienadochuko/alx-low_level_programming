#include<stdio.h>

/**
 * main - print with putchar.
 *
 * Return - Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar("%d", i);
	}
	putchar('\n');
	return (0);
}
