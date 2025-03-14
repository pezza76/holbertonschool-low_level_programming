#include <stdio.h>

/**
 *main - multiplies two numbers
 *
 *@argc: int
 *@argv: string arguments
*/

int main(int argc, char *argv[])
{
	if (argc != 2) 
	{
		printf("Error\n");
		return (1);
	}

	result = (argv[1] - '0') * (argv[2] - '0');

	printf("%d", result);
}
