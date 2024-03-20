#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of strings containing the arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op_func)(int, int);
	int div = 1;

	if (argc != 4) 
	{
		char *error_message = "Error\n";
		while (*error_message)
			putchar(*(error_message++));
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	if (op_func == NULL) {
		char *error_message = "Error\n";
		while (*error_message)
			putchar(*(error_message++));
		return (99);
	}

	result = op_func(num1, num2);

	if (result < 0) {
		result = -result;
		div = -1;
	}
	if (result > 9)
		div *= 10;
	if (result > 99)
		div *= 10;
	if (div > 1)
		putchar((result / div) + '0');
	putchar((result % 10) + '0');
	putchar('\n');
	return (0);
}
