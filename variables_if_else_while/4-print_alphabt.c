#include <stdio.h>
/**
 * main - Start program
 *
 * Return: always (0) Success
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		if (i == 'q' || i == 'e')

		{

			continue;
		}

		putchar(i);
	}
	putchar ('\n');
	return (0);
}
