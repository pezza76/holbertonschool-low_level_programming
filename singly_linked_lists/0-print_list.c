#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *print_list - prints all the elements of a list_t list
 *
 *@h: pointer to a struct
 *Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("[%u] ", h->len);

		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("%s\n", h->str);
		h = h->next;
		count++;
	}
	return(count);
}
