#include "main.h"

/**
 *reverse_array - reverses an aray
 *
 *@a: pointer
 *@n: pointer
 *Return: void
*/


void reverse_array(int *a, int n)
{
	int *x = a;
	int i = 0;
	int j;

	for ( ; i < n-1; i++)
	{
		x++;
	}

	for (j = 0;  j < n/2; j++)
	{
			int temp = *a;
			*x = *a;
			*x = temp;
			x--;
			a++;
	
	}
	
}

