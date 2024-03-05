#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: string controlled by accept
 * @accept: string that controll *s
 * Return: s or NULL
 */

char *_strpbrk(char *s, char *accept)

{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		s++;

			for (j = 0; accept[j] != '\0'; j++)
		{

				if (s[i] == accept[j])
				{
					return (s);
				}
		}
	}

return (NULL);
}
