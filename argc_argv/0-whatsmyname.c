#include <stdio.h>
#include "main.h"

/**
 * main - function that print the name of the function itself
 * @argc: number of things into the command line
 * @argv: array that hold the string value of the things that we entered
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	
		return (0);
}
