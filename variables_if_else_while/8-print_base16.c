#include <stdio.h>
/**
 * main - Start program
 *
 * Return: always (0) Success
 */
int main(void)
{
	int i;

	for  (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}

	for (i = 'a' ; i <= 'f' ; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
