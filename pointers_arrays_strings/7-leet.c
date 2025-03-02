#include "main.h"

/**
 *leet - encodes a string into 1337
 *
 *@str: a string
 *Return: string
*/

char *leet(char *str)
{

	char lower[] = {'e', 'o', 't', 'l'};
	char upper[] = {'E', 'O', 'T', 'L'};
	char num[] = {'3', '0', '7', '1'};

	char *x = str;
	int len = 0;
	int i;
	int j;
	

       

	for (i = 0; str[i] != '\0'; i++)

	{
		for (j = 0; j < 4; j++)
		{
			if (*x == lower[j] || *x == upper[j])
			{
				*x = num[j];
			}
		
		}
		x++;
	}
	return (str);
}
