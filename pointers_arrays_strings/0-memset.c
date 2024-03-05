#include "main.h"
#include <stdio.h>

/**
 * *_memset - settings
 * @s: point to the memory area to fill
 * @b: constant byte value
 * @n: number of bytes to be filled
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int v;

	for (v = 0 ; v < n ; v++)

		s[v] = b;


	return (s);
}
