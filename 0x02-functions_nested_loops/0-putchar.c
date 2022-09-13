#include "main.h"

/**
 * main - Prints _putchar with new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
<<<<<<< HEAD
	char alp[8] = "_putchar";
	int ch;
=======
	_putchar('_');
	_putchar('putchar');
	_putchar('\n');
>>>>>>> 6183bae03e2b3404e0b54221749dc5cc12678505

	for (ch = 0; ch < 8; ch++)
	{
		_putchar(alp[ch]);
	}
	_putchar('\n');
	return (0);
}
