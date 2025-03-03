#include "main.h"

/**
 *memset - function fills the first n bytes of the memory area pointed to by s with the constant byte b
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
