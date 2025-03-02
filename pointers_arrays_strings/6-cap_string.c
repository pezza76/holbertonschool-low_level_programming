#include "main.h"

/**
 *cap_string - capitalizes each word
 *
 *@str: pointer to a string
 *Return: pointer
*/

char *cap_string(char *str)
{
	char *x = str;
	int is_new_word = 1;

	while (*x != '\0')
	{

		if (*x == ' ' || *x == '\t' || *x == '\n' || *x == ',' || *x == ';' || *x == '.' || *x == '!' || *x == '"' || *x == '(' || *x == ')' || *x == '{' || *x == '}')
		{
			is_new_word = 1;
		}
		else
		{

			if (is_new_word && *x >= 'a' && *x <= 'z')
			{		
				*x = *x - 32;
				is_new_word = 0;
			}
			else
			{
				is_new_word = 0;
			}
		}

	x++;
	}

return (str);
}
