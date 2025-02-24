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
			print("FizzBuzz/n");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz\n");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz\n");
		}
		else
		{
			printf("%d", i);
		}
	}
}
