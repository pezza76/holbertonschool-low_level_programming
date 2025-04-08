#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *sum_dlistint - function that returns the sum of all the data of a linked list
 *
 *@head: struct pointer
 *Return: int
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	if (head->next == NULL)
	{
		sum = sum + head->n;
		return (sum);
	}

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);

}
