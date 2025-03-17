#include "main.h"
#includ <stdio.h>

/**
 *_strdup - returns a pointer to a newly allocated space in memory
 *
 *str: char
 *Return: pointer
*/

char *_strdup(char *str)
{	
	char *original = str;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*str != '\0')
	{
		len++;
		str++;
	}

	char *copy = (char *)malloc(len + 1);

	if (copy == NULL)
	{
		return (NULL);
	}

	return (copy);

	char *temp = copy;
	str = original;

	while (*str != '\0')
	{
		*temp = *str;
		temp++;
		str++;
	}

	return (copy);
}


