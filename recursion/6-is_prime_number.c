#include "main.h"

/**
 * is_prime_number_2 - Check if n is divisible by any number from 2 to sqrt(n)
 * @n: The number to check for divisibility
 * @d: The current divisor being checked
 *
 * Return: 1 if n is divisible by any number from 2 to sqrt(n), 0 otherwise
 */
int is_prime_number_2(int n, int d)
{
	if (n == d)
	{
		return (1);
	}
	if (n % d == 0)
	{
		return (0);
	}
	return (is_prime_number_2(n, (d + 1)));
}

/**
 * is_prime_number - Check if a number is prime
 * @n: The number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_number_2(n, 2));
}
