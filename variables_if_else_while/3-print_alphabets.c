#include <stdio.h>
/**
 * main - Start program
 *
 * Return: always (0) Success
 */

int main(void)
{
	char i;
	char I;

	for (i = 'a' ; i <= 'z' ; i++) 
	{
		putchar(i);
	}

	for (I = 'A' ; I <= 'Z' ; I++) 
	{
		putchar(I);
	}
		putchar ('\n');

	return (0);
}
