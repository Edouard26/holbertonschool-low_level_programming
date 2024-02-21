#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* function random digit with conditions */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		print(n "is positive")
	if (n == 0)
		print(n "is zero")
	if (n < 0)
		print(n "is negative")

	/* your code goes there */
	return (0);
}
