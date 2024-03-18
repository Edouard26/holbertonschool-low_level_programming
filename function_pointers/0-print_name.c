#include <stdio.h>
#include  "function_pointers.h"

/**
 *print_name - function that print a name
 *@name: pointer to a character
 *@f: a pointer to a function that takes a pointer to a character as its only parameter
Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
