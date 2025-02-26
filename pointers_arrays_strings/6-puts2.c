#include "main.h"

/**
 *puts2 - prints every second character
 *
 *@str: pointer
 *Return: void
 *
*/

void puts2(char *str)
{
	char *i = str;

	for ( ; *i != '\0'; i+=2)
	{
		_putchar(*i);
	}
	_putchar('\n');
}
			
