#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: The number of arguments passed
 *
 * Return: The sum of all arguments, or 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i, x;
	va_list args;

	va_start(args, n);

	for (i = 0, i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}
	return (sum);
}
