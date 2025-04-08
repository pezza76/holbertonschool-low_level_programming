#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *free_dlistint - frees a list
 *
 *@head: pointer to a struct
 *Return: void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);

	}
}
