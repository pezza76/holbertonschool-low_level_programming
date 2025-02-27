#include "main.h"

/**
 * _atoi - converts string to integer
 *
 * @s: string
 * Return: int
 */

int _atoi(char *s)
{
    char *y = s;      
    int num = 0;      
    int sign = 1;     

    
    while (*y == ' ') {
        y++;
    }

    
    if (*y == '-' || *y == '+') {
        if (*y == '-') {
            sign = -1;      
        }
        y++;
    }

    
    while (*y != '\0')
    {
        
        if (*y >= '0' && *y <= '9')
        {
            
            num = num * 10 + (*y - '0');
        }
        else
        {
            break;
        }
        y++; 
    }

    
    return num * sign;
}
