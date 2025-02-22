#include "main.h"

/**
 *
 *
 *
*/

void print_to_98(int n)
{
	    int i;
    for (; n < 99; n++)
    {
        if (n < 10)
        {
            _putchar(n + '0');
            _putchar(',');
            _putchar(' ');
            
        }
        
        if (n > 9)
        {
            _putchar(n / 10 + '0' );
            _putchar(n % 10 + '0');
        if (n < 98)
        {
            _putchar(',');
            _putchar(' ');
        }
        }
    }
}
