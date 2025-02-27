#include "main.h"
/**
 * _strcat - appends a string to another
 *
 * @dest: pointer
 * @src: pointer
 * Return: pointer
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
