#include "main.h"

/**
 *print_rev - prints a string in reverse
 *
 *@s: points to first character of a string
 *Return: void
*/

void print_rev(char *s)
{

	char *i = s;

	while (*s != '\0')
	{
		s++;
	}

	s--;

	while (s >= i)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
