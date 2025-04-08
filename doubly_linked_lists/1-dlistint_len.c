#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *dlistint_len - returns the number of elements
 *
 *@h: pointer
 *Return: size_t number
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
