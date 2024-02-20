#include <stdio.h>

/**
 *main - Start program
 *Return: (int) Success
 */

int main(void)

{
	printf("Size of char: 1 byte(s)\n", sizeof(char));
	printf("Size of int: 4 byte(s)\n", sizeof(int));
	printf("Size of long int: 4 byte(s)\n", sizeof(long int));
	printf("Size of long long int: 8 byte(s)\n", sizeof(long long int));
	printf("Size of float: 4 byte(s)\n", sizeof(float));

	return (0);
}

