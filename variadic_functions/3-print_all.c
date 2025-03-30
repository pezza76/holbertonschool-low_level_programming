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
    va_list args;
    int idx = 0;
    int separator = 0;
    char current_char;
    char *str;
    char *to_print;

    va_start(args, format);

    while (format && format[idx])
    {
        current_char = format[idx];
        if (separator == 1)
            printf(", ");

        separator = 0;
        current_char = format[idx] - 'c';
        while (current_char >= 0 && current_char <= ('s' - 'c'))
        {
            if (current_char == 0) /* 'c' - 'c' */
            {
                printf("%c", va_arg(args, int));
                separator = 1;
            }
            current_char = format[idx] - 'i';
            if (current_char == 0) /* 'i' - 'i' */
            {
                printf("%d", va_arg(args, int));
                separator = 1;
            }
            current_char = format[idx] - 'f';
            if (current_char == 0) /* 'f' - 'f' */
            {
                printf("%f", va_arg(args, double));
                separator = 1;
            }
            current_char = format[idx] - 's';
            if (current_char == 0) /* 's' - 's' */
            {
                str = va_arg(args, char *);
                to_print = "(nil)";
                if (str != NULL)
                    to_print = str;
                printf("%s", to_print);
                separator = 1;
            }
            current_char = -1; /* Exit the inner while loop */
        }

        idx++;
    }

    if (separator == 0 && !format)
        printf("(nil)");

    printf("\n");
    va_end(args);
}
