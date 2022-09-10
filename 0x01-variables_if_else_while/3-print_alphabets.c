#include<stdio.h>                                                                                                    
   
/**
 * main - printing the alphabet in lowercase and then uppercase                                                                           
 *                                                                                                                   
 * Return: Always 0 (success)                                                                                        
 *                                                                                                                   
 */                                                                                                          

int main(void)                           
{	

        char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	char alp1[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int ch;
	int cha;

        for (ch = 0; ch < 26; ch++)                                                                                  
        {                                                                                                            
                putchar(alp[ch]);
        }

	for (cha = 0; cha < 26; cha++)
	{
		putchar(alp1[cha]);
	}
                putchar('\n');
                return (0);
}
