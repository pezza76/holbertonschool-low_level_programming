#include <stdio.h>

/**
 * main -entry
 *
 * Return: Always 0
*/

int main(void)

{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
