#include <stdlib.h>
#include <time.h>
/**
 * *main - Start program
 *Return: (int) Success
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of\n", n, "is\n")
		int lastDigit = n % 10;

		if (lastDigit > 5)
			printf("and is greater than 5\n")

		if (lastDigit == 0)
			printf("and is 0\n")

		else
			printf("and is less than 6 and not 0\n")

	/* your code goes there */
	return (0);
}