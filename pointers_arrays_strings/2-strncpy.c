#include "main.h"

/**
 *_strncpy - copies a string to a destination
 *
 *@dest: pointer
 *@src: pointer
 *Return: pointer
*/

char *_strncpy(char *dest, char *src, int n)
{
	char *x = dest;
	char *y = src;
	int len= 0;

	while (*x != '\0')
	{
		x++;
		len++;
	}

	if (n > len)
	{
		n = len;
	}
	
	while (*dest != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (dest);
}


