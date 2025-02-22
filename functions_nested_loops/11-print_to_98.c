#include "main.h"

/**
 *
 *
 *
*/

void print_to_98(int n)
{
	    int i;
    for (i = 0; i < 99; i++)
    {
        if (i < 10)
        {
            _putchar(i + '0');
            _putchar(',');
            _putchar(' ');
            
        }
        
        if (i > 9)
        {
            _putchar(i / 10 + '0' );
            _putchar(i % 10 + '0');
        if (i < 98)
        {
            _putchar(',');
            _putchar(' ');
        }
        }
    }
}
