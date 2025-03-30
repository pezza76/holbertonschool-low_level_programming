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
        
                if (format == NULL)
        {
		printf("\n");
                return;
        }
        va_start(args, format);
    
        while (format[i] != '\0')
        {
                while (first == 0)
                {
                        printf(", ");
			break;
                }
                switch (format[i])
                {
                        case 'c':
                                c = (char)va_arg(args, int);

                                printf("%c", c);
                                first = 0;
                                break;
                        case 'i':
                                num = va_arg(args, int);

                                printf("%i", num);
                                first = 0;
                                break;
                        case 'f':
                         {
                                num2 = va_arg(args, double);

                                printf("%f", num2);
                                first = 0;
                                break;
                        }
                        case 's':
                        {
                                str = va_arg(args, char*);

                                if (str == NULL)
                                {
                                       printf("(nil)");
                                        first = 0;
                                        break;
                                }

                                        printf("%s", str);
                                        first = 0;
                                        break;
                        }
                        default:
                        first = 1;

                }
                i++;
        }
        va_end(args);
        printf("\n");
}
