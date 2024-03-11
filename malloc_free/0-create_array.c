#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - create an array of chars
 * @size: size of array
 * @c: value into the array
 * Return: char or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *ar;

	if (size <= 0)
		return (NULL);

	ar = malloc(size * sizeof(char));


			for (n = 0; n < size; n++)
			{
			ar[n] = c;
			}

			return (ar);
			}
