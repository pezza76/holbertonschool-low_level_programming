#include "dog.h"
#include <stddef.h>

/**
 *
 *
 *
 *
 *
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;


