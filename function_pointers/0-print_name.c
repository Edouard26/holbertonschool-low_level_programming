#include <stdio.h>
#include  "function_pointers.h"

/**
 *print_name - function that print a name
 *@name: pointer to a character
 *@f: pointer to a function
Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
