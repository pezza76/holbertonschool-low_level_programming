#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	char *copy;
	char *temp;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*str != '\0')
	{
		len++;
		str++;
	}

	copy = (char *)malloc(len + 1);

	if (copy == NULL)
	{
		return (NULL);
	}



	temp = copy;
	str = original;

	while (*str != '\0')
	{
		*temp = *str;
		temp++;
		str++;
	}

	return (copy);
}


