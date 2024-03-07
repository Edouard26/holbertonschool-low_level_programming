#include "main.h"
/**
* _sqrt_recursion - Wrapper function to call the recursive function
*@n: The number to find the square root of
*Return: The square root of n if found, -1 otherwise
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);

	return (_sqrt_recursion_2(n, 0));
}

/**
*_sqrt_recursion_2 - Find the square root of a number recursively
*@n: The number to find the square root of
*@s: The current guess for the square root
*Return: The sqaure root of n if found, -1 otherwise
*/

int _sqrt_recursion_2(int n, int s)
{
	if ((s * s) == n)
	{
		return (s);
	}
	if ((s * s) > n)
	{
		return (-1);
	}
	return (_sqrt_recursion_2(n, (s + 1)));
}
