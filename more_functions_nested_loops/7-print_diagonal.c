#include "main.h"

/**
 * print_diagonal - draws a diagonal
 *@n: (int) compare to b
 * return: void
 */

void print_diagonal(int n)
{
	int b, a;

		for (a = 0; a < n; a++)
		{

			for (b = 0; b < n; b++)
			{
				if (a == b)
				{
					_putchar('/');
					break;
				}
				else
					_putchar(' ');
			}
			_putchar('\n');
		}		
}
