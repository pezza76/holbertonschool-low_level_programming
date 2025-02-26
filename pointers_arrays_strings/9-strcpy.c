#include "main.h"

/**
 *_strcpy - copies a string
 *
 *@dest: pointer
 *@src: pointer
 *Return: char
*/

char *_strcpy(char *dest, char *src)
{
	char *x = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return (x);



}
