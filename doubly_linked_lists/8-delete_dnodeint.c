#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list.
 * @head: Pointer to a pointer to the head of the linked list
 * @index: Index of the node to delete
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *current = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (current->next)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; i < index && current != NULL; i++)
	{
		temp = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	temp->next = current->next;
	if (current->next)
		current->next->prev = temp;
	free(current);
	return (1);
}
