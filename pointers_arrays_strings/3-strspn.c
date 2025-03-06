#include "main.h"

/**
 *_strspn - function that gets the length of a prefix substring
 *
 *@s: string to be checked
 *@accept: string to be compared
 *
 * Return:
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s == *accept)
	{
		len++;
		s++;
		accept++;
	}
	return (len);
}
