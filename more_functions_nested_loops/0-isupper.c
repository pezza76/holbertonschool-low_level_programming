#include "main.h"
#include <ctype.h>

/**
 *_isupper - returns true if character is upper case
 *
 *@c: integer
 *Return: int
*/

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
