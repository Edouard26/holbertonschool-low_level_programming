#include "main.h"

/**
 * int print_sign - print sign of a number
 * Return: always (0) Success
 */

int print_sign(int n)

{

	if (n > 0)

	{
		_putchar ('+');
		return (1);
	}

	if (n == 0)

	{
		_putchar ('0');
		return (0);
	}

	else

	{
		_putchar ('-');
		return (-1);
	}
}
