#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - entry point
 *
 * Return: Always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n % 2 == 0) {
		printf("%d is an even number\n", n);
	}
	else {
		printf("%d is an odd number\n", n);
	}
	return (0);
}
