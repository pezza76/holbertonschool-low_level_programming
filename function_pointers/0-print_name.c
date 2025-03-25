#include "function_pointers.h"
#include <stdio.h>

/**
 *print_name - calls a function to print a name
 *
 *@name: The name to print
 *@f: pointer to a function that takes char * as a parameter
 *Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
