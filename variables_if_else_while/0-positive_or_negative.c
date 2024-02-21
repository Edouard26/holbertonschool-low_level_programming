#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* function random digit with conditions */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	if (n == 0)
	{
		printf("%d is zero", n);
	}
	if (n < 0)
	{
		printf("%d is negative", n);
	}

	/* your code goes there */
	return (0);
}
