/**
 *op_add - function to add two integers
 *@a: integer
 *@b: integer
 *Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - function to substract two integers
 * @a: integer
 * @b: integer
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - function to multiply two integers
 *@a: integer
 *@b: integer
 *Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - function to divide two integers
 *@a: integer
 *@b: integer
 *Return: a / b
 */

int op_div(int a, int b)
{
	if (b == 0)

		return (0);

	return (a / b);
}

/**
 *op_mod - function to find the modulus of two integers
 *@a: integer
 *@b: integer
 *Return: a % b
 */

int op_mod(int a, int b)
{
	if (b == 0)
		return (0);

	return (a % b);
}
