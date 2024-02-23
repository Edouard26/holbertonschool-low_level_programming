#include "main.h"

/**
 * print_alphabet - print the alphabet
 * Return: always (0) Success
 */

void print_alphabet_x10(void)

{
	char i, z;


	for (z = 0; z <= 9; z++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
		{
			_putchar(i);
		}

		_putchar('\n');
	}
}
