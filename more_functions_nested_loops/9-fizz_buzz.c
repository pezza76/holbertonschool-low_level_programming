#include <stdio.h>

/**
 *main - prints numbers 1-100 and replaces some numbers with Fizz, Buzz or Fizbuzz
 *
 *Return: void
*/


int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i == 100)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	putchar('\n');
	return (0);
}
