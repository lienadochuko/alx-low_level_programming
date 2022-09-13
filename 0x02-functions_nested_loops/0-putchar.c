#include "main.h"

/**
 * main - Prints _putchar with new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[8] = "_putchar";
	int ch;
	
	for (ch = 0; ch < 8; ch++)
	{
		_putchar(alp[ch]);
	}
	_putchar('\n');
	return (0);
}
