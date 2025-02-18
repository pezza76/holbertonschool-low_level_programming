#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random number and checks if it is even or odd.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

    /* Check if the number is even or odd */
	if (n > 2 == 0)
	{
		printf("%d: is positive\n", n);
	}
	else if
	{
		printf("%d: is zero\n", n);
	else
	{
		printf("%d: is negative\n", n);
	}

	return (0);
}
