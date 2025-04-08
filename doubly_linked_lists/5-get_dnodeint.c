#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *get_dnodeint_at_index - function that returns the nth node of a dlistint_t linked list.
 *
 *@head: pointer to a struct
 *@index: unsigned int
 *Return: struct pointer
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{       
        unsigned int i;

        if (head == NULL)
                return (NULL);

        for (i = 0; index > i; i++)
        {
                head = head->next;
        }

        return (head);
}
