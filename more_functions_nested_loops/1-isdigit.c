#include "main.h"

/**
 *_isdigit - checks if c is an integer between 0-9
 *
 *@c: int to be checked
 *Return: int
*/

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
