#include "main.h"

/**
 *string_toupper - converts lowercase to uppercase
 *
 *@str: a string
 *Return: address
*/

char *string_toupper(char *str)
{
	char *x = str;
	int i = 0;
	int len = 0;
	char *original_str = str;

	while (*x != '\0')
	{
		len++;
		x++;
	}

	for (; i < len; i++)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
	return (original_str);
}
