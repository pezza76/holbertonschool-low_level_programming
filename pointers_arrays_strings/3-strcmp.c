#include "main.h"

/**
 *_strcmp - compares two strings
 *
 *@s1: pointer
 *@s2: pointer
 *Return: pointer
*/


int _strcmp(char *s1, char *s2)
{
	int result = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			result = *s1 - *s2;
			break;
		}
		s1++;
		s2++;
	}
	return (result);
}

	
