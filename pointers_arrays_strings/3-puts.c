#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * char: character
 * *str: string
 * return: void
 */

void _puts(char *str)

{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
