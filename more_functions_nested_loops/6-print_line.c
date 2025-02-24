#include "main.h"

/**
 *print_line - prints a line n times
 *
 * @n: int
 *Return: int
*/

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
