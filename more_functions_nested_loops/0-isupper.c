#include "main.h"
#include <stdio.h>

/**
 * _isupper - uppercase
 * @c: (int) character to check
 * Return: 1 or 0
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
