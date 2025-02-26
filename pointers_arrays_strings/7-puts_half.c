#include "main.h"

/**
 *puts_half - prints first half of string
 *
 *@str: pointer
 *Return: void
*/


void puts_half(char *str)
{
	int len = 0;
	int i;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	for (i = 0; i < len; i++)
	{
		if (len % 2 == 0 && i < len / 2)
		{

			_putchar(str[i]);
		}
		else if (i <= len / 2)
		{
			_putchar(str[i]);
		}
	}
}
