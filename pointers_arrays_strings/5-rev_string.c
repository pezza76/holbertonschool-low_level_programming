#include "main.h"

/**
 *rev_string - reverses a string
 *
 *@s: a pointer
 *Return: void
*/

void rev_string(char *s)
{
	char *i = s;
	char temp;

	while (*s != '\0')
	{
		s++;
	}
	s--;

	while (s > i)
	{
		temp = *s;
		*s = *i;
		*i = *s;
	}


}
