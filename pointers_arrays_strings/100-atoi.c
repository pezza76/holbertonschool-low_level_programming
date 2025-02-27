#include "main.h"

/**
 *atoi - converts string to integer
 *
 *@s: string
 *Return: int
*/

int _atoi(char *s)
{
    
    char *y = s;
    int len = 0;
    int digit = 0;
    int num = 0;

    while (*y != '\0')
    {
        if (*y == '-')
        {
            digit++;
        }
        y++;
        len++;


    }



    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 48 && s[i] <= 57)
        {
            num = num * 10 + x[i] -  '0';

        }
    }

    if (digit % 2 != 0)
    {
        num = -num;
    }
   
    return 0;
}
