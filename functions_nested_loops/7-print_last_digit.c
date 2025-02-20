#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - returns last digit of number
 * @n: a number
 *
 * Return: int
*/

int print_last_digit(int n)
{
	int last_digit;
	last_digit = abs(n % 10);
	return (last_digit);
}
