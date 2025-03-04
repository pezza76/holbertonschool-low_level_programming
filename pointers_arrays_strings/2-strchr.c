#include "main.h"
#include <stddef.h>

/**
 *_strchr - finds first occurence of c in s
 *
 *@s: pointer
 *@c: character
 *Return: pointer
*/

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
			
		}
		s++;
	}

		return (NULL);
}	

