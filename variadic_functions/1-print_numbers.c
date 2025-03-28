#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_numbers - prints numbers with a separator
 *
 *@n: the numbers of integers passed to the function
 *Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num;
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args);
}
