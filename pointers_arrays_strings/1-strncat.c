#include <stdio.h>

/**
 *_strncat - function that concatenates two strings
 *
 *@dest: destination string
 *@src: source string
 *@n: int
 *Return: pointer
*/

char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	char *original_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && count < n)
	{
		*dest = *src;
		count++;
		src++;
		dest++;
	}

	return (original_dest);
}

