#include "main.h"
#include <ctype.h>

/**
 *_isalpha - checks if input is a letter
 *
 *Return: int
*/

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
