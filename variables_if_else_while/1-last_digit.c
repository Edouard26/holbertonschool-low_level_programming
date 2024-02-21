#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * *main - Start program
 *Return: (int) Success
*/

int main(void)
{
	int n;
	int lastDigit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is %d\n", n, lastDigit);

		if (lastDigit > 5)
			printf("and is greater than 5\n");

		if (lastDigit == 0)
			printf("and is 0\n");

		else
			printf("and is less than 6 and not 0\n");

	/* your code goes there */
	return (0);
}
