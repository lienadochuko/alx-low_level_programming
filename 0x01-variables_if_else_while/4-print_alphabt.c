#include<stdio.h>



/**

 * main - print the aplhabets

 *

 * Return: Always 0 (success)

 */

int main(void)

{

char alp[24] = "abcdfghijklmnoprstuvwxyz";
int ch;

for (ch = 0; ch < 24; ch++)
{
putchar(alp[ch]);
}
putchar('\n');
return (0);
}
