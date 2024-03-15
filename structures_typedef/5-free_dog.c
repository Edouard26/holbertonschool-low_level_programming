#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog structure.
 * @d: Pointer to the dog structure to be freed.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}


/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */

int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("Poppy", 3.5, "Bob");
	if (my_dog == NULL)
	{
		printf("Failed to create a new dog\n");
		return (1);
	}

	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);

	free_dog(my_dog);

	return (0);
}
