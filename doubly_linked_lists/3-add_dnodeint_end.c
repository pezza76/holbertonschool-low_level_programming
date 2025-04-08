#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *add_dnodeint_end - function that adds a new node at the end of a list
 *
 *@head: pointer to a pointer
 *@n: int
 *Return: pointer of new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
	}

	else
	{
		dlistint_t *temp = *head;

		while (temp->next)
		{
			temp = temp->next;
		}

		new_node->prev = temp;
		temp->next = new_node;
		new_node->next = NULL;
	}

	return (new_node);
}



