#include <stdio.h>
/**
 * main - Start program
 *
 * Return: always (0) Success
 */
int main(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		putchar('0' + i);
	}

	putchar('\n');

	return (0);
}
