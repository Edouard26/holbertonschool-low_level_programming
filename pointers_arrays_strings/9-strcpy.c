#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copy string pointed to by src
 * @*dest: destination of content of src
 * @*src: content towards *dest
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
	}
}

