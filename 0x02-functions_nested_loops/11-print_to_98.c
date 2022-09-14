#include <stdio.h>

/**
 * print_to_98 - prints all naturall numbers.
 *
 * @n: input number.
 *
 * Return: no return.
 */
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		printf("%d, ", n);
		printf("%d", 98);
	}
	for (n = 111; n <= 98; n--)
	{
		printf("%d, ", n);
	}
	for (n = 81; n <= 98; n--)
	{
		printf("%d, ", n);
	}
	for (n = -10; n <= 98; n++)
	{
		printf("%d, ", n);
	}
	printf("%d, ", 98);
}
