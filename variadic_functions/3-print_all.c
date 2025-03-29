#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_all - prints everything
 *
 *@format: string
 *Return: void
*/

void print_all(const char * const format, ...)
{
	int i;
	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		switch (format[i])
		{
			case 'c':
				char c = (char)va_arg(args, int);

				printf("%c", c);
				break;
			case 'i':
				int num = va_arg(args, int);

				printf("%i", num);
				break;
			case 'f':
			{
				double num2 = va_arg(args, double);

				printf("%.2f", num2);
				break;
			}
			case 's':
			{
				char *str = va_arg(args, char*);

				if (str == NULL)
					printf("(nil)")
				else
					printf("%s", str);
				break;
			}
		}
	}
}
