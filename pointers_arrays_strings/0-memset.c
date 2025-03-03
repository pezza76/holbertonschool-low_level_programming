#include "main.h"

/**
 *_memset - function fills first n bytes of the memory pointed to by s with  b
 *
 *@b: character
 *@n: int
 *Return: pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;

	}
	return (s);
}
