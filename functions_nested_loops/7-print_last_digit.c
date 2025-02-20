#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_last_digit - prints and returns last digit of a number
 * @n: a number
 *
 * Return: int
*/

int print_last_digit(int n)
{
	int last_digit;
	last_digit = abs(n % 10);
	putchar(last_digit + '0');

	return (last_digit);
}
