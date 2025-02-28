#include "main.h"

/**
 *_strncpy - copies a string to a destination
 *
 *@dest: pointer
 *@src: pointer
 *@n: int
 *Return: pointer
*/

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0' ; index++)
	{
		dest[index] = src[index];
	}
	for (; index  < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
