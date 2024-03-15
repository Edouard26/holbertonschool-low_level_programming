#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog with given name, age, and owner.
 * @name: Pointer to the name string.
 * @age: Age of the dog.
 * @owner: Pointer to the owner string.
 * Return: Pointer to the newly created dog structure.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
		if (new_dog == (NULL))
	{
		return (NULL);
	}

	new_dog->name = malloc(_strlen(name) + 1);
		if (new_dog->name == (NULL))
	{
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->name, name);

	new_dog->owner = malloc(_strlen(owner) + 1);
		if (new_dog->owner == (NULL))
		{
			free(new_dog->name);
			free(new_dog);
			return (NULL);
		}
			_strcpy(new_dog->owner, owner);

			new_dog->age = age;

			return (new_dog);
}
/**
* _strlen - size of a string
* @str: string
* Return: len
*/

int _strlen(char *str)

{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}


/**
 * _strcpy - copies the contents of one null-terminated string to another
 * @dest: destination
 * @src: source
 * Return: dest
 */

char *_strcpy(char *dest, char *src)

{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
