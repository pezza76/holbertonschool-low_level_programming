#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 *add_node - adds a new node to a linked list
 *
 *@head: pointer to a pointer
 *@str: pointer to a string
 *Return: Pointer to newly created node
*/

list_t *add_node(list_t **head, const char *str)
{
	int len;
	list_t *new_node;
	
	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	
	
	new_node->str = strdup(str);

	for (len = 0; str[len] != '\0'; len++);
	
	new_node->len = len;
	new_node->next = *head;
	
	*head = new_node;

	return (new_node);
}
