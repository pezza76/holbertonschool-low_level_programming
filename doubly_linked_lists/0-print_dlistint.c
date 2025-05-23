#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *print_dlistint - prints all elements of a list
 *
 *@h: pointer to a struct
 *Return: size_t number
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
