#include "main.h"

/**
 * print_alphabet - function that prints the alphabet followed by a new line
 *
 * Return: void
*/

void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
