#include <stddef.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @list_t: list
 * @h: pointer of the head
 * Return: count
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
