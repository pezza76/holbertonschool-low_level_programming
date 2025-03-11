#include "main.h"

/**
 *factorial - returns a factorial of n
 *
 *@n: int
 *Return: int
*/

int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}



