#include "main.h"

/**
 *strcat - adds two strings together
 *
 *@dest: string
 *@src: string
 *Return: pointer
*/

char *_strcat(char *dest, char *src)
{
	char *x = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	
	*dest = '\0';
	return (x);





}
