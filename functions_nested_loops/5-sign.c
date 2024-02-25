#include "main.h"

/**
 * int print_sign - print sign of a number
 * Return: always (0) Success
 */

int print_sign(int n)

{

	if (n > 0)

	{
		return (1);
		_putchar ('+');
	}

	if (n == 0)

	{
		return (0);
		_putchar ('0');
	}

	else

	{
		return (-1);
		_putchar ('-');
	}
}
