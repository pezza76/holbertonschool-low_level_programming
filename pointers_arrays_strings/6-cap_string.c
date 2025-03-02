#include "main.h"

/**
 *cap_string - capitalizes each word
 *
 *@str: pointer to a string
 *Return: pointer
*/

char *cap_string(char *str)
{
	char *x = str;


    while (*x != '\0')
    {
        if (*x == ' ' || *x == ' ' ||*x == '\t ' ||*x == '\n ' ||*x == ',' ||*x == ';' ||*x == '.' ||*x == '!' ||*x == '"' ||*x == '(' ||*x == ')' ||*x == '{' ||*x == '}')
        {
            x++;
            continue;
        }
        if ((*x >= 'a' && *x <= 'z') || *x >= ('A' && *x <= 'Z' ))
        {
            if (*x >= 'a' && *x <= 'z')
                    *x = *x - 32;
        }
        x++;
        while (*x == ' ' || *x == ' ' ||*x == '\t ' ||*x == '\n ' ||*x == ',' ||*x == ';' ||*x == '.' ||*x == '!' ||*x == '"' ||*x == '(' ||*x == ')' ||*x == '{' ||*x == '}')
        {
            x++;
        }


    }

	return (str);

}
