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
	int i = 0;
	va_list args;
	char c;
	int num;
	double num2;
	char *str;
	int first = 1;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (first == 0)
		{
			printf(", ");
		}
		switch (format[i])
		{
			case 'c':
				c = (char)va_arg(args, int);

				printf("%c", c);
				break;
			case 'i':
				num = va_arg(args, int);

				printf("%i", num);
				break;
			case 'f':
			{
				num2 = va_arg(args, double);

				printf("%f", num2);
				break;
			}
			case 's':
			{
				str = va_arg(args, char*);

				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				
					printf("%s", str);
					break;
			}
			
		}
		first = 0;
		i++;
	}
	va_end(args);
	printf("\n");
}
