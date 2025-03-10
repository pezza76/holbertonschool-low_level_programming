#include "main.h"
#include <stddef.h>

/**
 *_strstr - function finds the first occurrence of the substring needle in the string haystack
 *
 *@haystack: pointer
 *@needle: pointer
 *Return: pointer
 *
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	
	if (*needle)
	{
		return (NULL);
	}

	while (*haystack)
	{
		i = 0;

		if (*haystack == *needle)
		{
			do 
			{
				if(needle[i + 1] == '\0')
				{

					return(haystack);
				}
				i++;
			}
			while (haystack[i] == needle[i]);
		}

		haystack++;
	}
	return (NULL);
}

