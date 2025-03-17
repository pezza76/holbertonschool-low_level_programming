#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *str_concat - joins two strings
 *
 *@s1: string
 *@s2: string
 *Return: pointer
*/

char *str_concat(char *s1, char *s2)
{
	char *combo;
	char *original;
	char *temp1 = s1;
	char *temp2 = s2;
	int len1 = 0;
	int len2 = 0;
	int i = 0;

	if (s1 ==  NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (*temp1 != '\0')
	{
		len1++;
		temp1++;
	}

	    while (*temp2 != '\0')
        {
                len2++;
                temp2++;
        }
	
	combo = malloc((len1 + len2 + 1) * sizeof(char));
	original = combo;

	while (*s1 != '\0')
	{
		*combo = *s1;
		combo++;
		s1++;
	}

	while (*s2 != '\0')
	{
		*combo = *s2;
		combo++;
		s2++;
	}
	
	*combo = '\0';
	
	return (original);
	
}
