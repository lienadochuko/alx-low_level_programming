#include <stdio.h>

/**
 * main - prints Buzz each numbers of 3 and 5.
 * Return: Always 0.
 */
int main(void)
{
	int c;

	c = 1;
	printf("%d", c);
	for (c = 2; c <= 100; c++)
	{
		if ((c % 3 == 0) && (c % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (c % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (c % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", c);
		}
	}
	printf("\n");
	return (0);
}
