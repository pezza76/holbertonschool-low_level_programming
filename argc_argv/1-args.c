#include <stdio.h>

/**
 *main - Program that prints the number of arguments passed to it
 *
 *@argc: number of arguments passed
 *@argv: arguments
 *Return: 0 on success
*/

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
