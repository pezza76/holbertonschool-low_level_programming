#include "main.h"
#include <stdio>

/**
 * print_sign - prints a sign
 * @n: int to be checked
 *
 * Return: int
*/
 
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}

