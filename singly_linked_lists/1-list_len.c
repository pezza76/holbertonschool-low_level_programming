#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *list_len - returns the number of elements in a linked list_t list
 *
 *@h: pointer to a list_t struct
 *Return: size_t number
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
