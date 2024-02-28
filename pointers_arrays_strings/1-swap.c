#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap 2 integers
 * @a: (int) A swap to B
 * @b: (int) B swap to A
 * Return: void
 */

void swap_int(int *a, int *b)

{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
