#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/*
 *
 *
 *
 *
 *
 *
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i;

	if (head == NULL)
		return (-1);

	
