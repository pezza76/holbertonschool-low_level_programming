#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 *add_node_end - adds a node to the end of a list
 *
 *@head: double pointer
 *@str: string
 *Return: pointer to a list_t struct
*/

list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	
	if (new_node == NULL)
	{
		return(NULL);
	}
	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for(len = 0; str[len] != '\0'; len++);

	new_node->len = len;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
	current->next = new_node;	
	new_node->next = NULL;

	return (new_node);
	}
}


