#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *insert_dnodeint_at_index - function that inserts a new node at a given position
 *
 *@idx: unsigned int
 *@n: int
 *Return: struct pointer
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new_node;
	unsigned int i;

	if (h == NULL)
		return(NULL);
	
	
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}



		for (i = 0; temp != NULL && i < idx - 1; i++)
		temp = temp->next;

	if (temp == NULL)
		return (NULL);

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));


	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->next = temp->next;
	new_node->prev = temp;

	temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}


