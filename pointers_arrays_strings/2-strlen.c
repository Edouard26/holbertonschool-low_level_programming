#include "main.h"
#include <stdio.h>

/**
 * _strlen - return the length of a string
 * @*s: length of a string
 * Return: void
 */

int _strlen(char *s)

{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
