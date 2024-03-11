#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - returns a pointer to a new string
 * @str: new string
 * Return: NULL or pointer
 */

char *_strdup(char *str)

{
	int length = (_strlen(str) + 1);
	char *new_str;

	if (str == NULL)

	int length = (strlen(str) + 1)
	{
		return (NULL);
	}

	new_str = (char *) malloc(length * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}

	_strcpy(new_str, str);

	return (new_str);
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

char _strcpy(char *dest, char *src)

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
