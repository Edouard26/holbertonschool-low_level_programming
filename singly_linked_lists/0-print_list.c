#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @list_t: list
 * @h: pointer 
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	printf("[");
	while (current != NULL)
	{
		if (current ->str != NULL)
			printf("%s", current->str);
		else
			printf("(nil)");

		count++;
		current = current->next;

		if (current != NULL)
			printf(", ");
	}
	printf("]\n");

	return count;
}
	
