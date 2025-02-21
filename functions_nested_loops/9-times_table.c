#include "main.h"

/**
 * times_table - return 9 times table
 *
 * Return: void
*/

void times_table(void)
{	
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int result = i * j;
			if (result > 9)
				_putchar(result / 10 + '0');

			_putchar(result % 10 + '0');
			if (j == 9)
			break;
			_putchar(',');
		}
	_putchar('\n');

}
