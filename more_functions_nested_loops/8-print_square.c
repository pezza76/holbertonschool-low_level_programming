#include "main.h"

/**
 *print_square - prints a square
 *
 *@size: int
 *Return: int
*/


void print_square(int size)
{

	int i;
	int j;

	if (size <= 0)
		putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
