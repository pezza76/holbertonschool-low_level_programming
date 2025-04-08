#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *add_dnodeint - function that adds a new node to the start of a list
 *
 *@head: pointer to a pointer
 *@n: int
 *Return: struct pointer
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	new_node = malloc(sizeof(dlistint_t));
	
	if (new_node == NULL)
		return NULL;
	 
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;


	if (*head)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;

	return (new_node);
}
