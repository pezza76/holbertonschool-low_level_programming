#include "dog.h"
#include <stddef.h>

/**
 *array_iterator - function
 *
 *@array: pointer
 *@size: size_t
 *action: pointer function that takes int as parameter
 *Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t size;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
