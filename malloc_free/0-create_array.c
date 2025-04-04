#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *create_array - creates an array of chars, and initializes a specific char
 *
 *@size: unsigned int
 *@c: char
 *Return: pointer to an array
*/

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(char) * (size));

	if (s == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
