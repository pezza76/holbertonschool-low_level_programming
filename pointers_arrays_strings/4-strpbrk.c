#include "main.h"
#include <stddef.h>

/**
 *_strpbrk - gets first occurence of a character in a string
 *
 *@s: string
 *@accept: string
 *Return: pointer
*/

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;


	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
