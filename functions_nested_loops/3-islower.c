#include "main.h"
#include <ctype.h>

/**
 * _islower - checks if a character is lowercase
 *
 * Return: Int
*/

int _islower(int c)
{

	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
