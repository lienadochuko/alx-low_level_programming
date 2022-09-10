#include<stdio.h>

/**
 * main - printd the alphabet in lowercase
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int ch;

	for (ch = 0; ch < 26; ch++)
	{
		putchar(alp[ch]);
	}
		putchar('\n');
		return (0);
}




