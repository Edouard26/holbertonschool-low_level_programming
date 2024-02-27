#include "main.h"

/**
 * print_line - draw a line
 * return: void
 * @n: (int) compare with i
 */

void print_line(int n)

{
	int i;

	if (n > 0)

	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
