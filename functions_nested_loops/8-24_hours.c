#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
*/

void jack_bauer(void)
{
	int i;
	int z;

	for (i = 0; i < 24; i++)
	{
		for (z = 0; z < 60; z++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(z / 10 + '0');
			_putchar(z % 10 + '0');
			_putchar('\n');
		}
	}
}
