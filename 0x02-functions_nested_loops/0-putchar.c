#include <stdio.h>

/**
 * main - Prints _putchar with new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alp[] = {45, 112, 117, 116, 99, 104, 97, 114};
	int i, z;
	
	z = sizeof(alp) / sizeof(int);
	for (i = 0; i < z; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
