#include "main.h"

/**
 *_strlen - returns length of string
 *
 *@s: a string
 *Return: int
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
