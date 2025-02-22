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
            putchar(i + '0');
            putchar(',');
            putchar(' ');
            
        }
        
        if (i > 9)
        {
            putchar(i / 10 + '0' );
            putchar(i % 10 + '0');
        if (i < 98)
        {
            putchar(',');
            putchar(' ');
        }
        }
    }
}
