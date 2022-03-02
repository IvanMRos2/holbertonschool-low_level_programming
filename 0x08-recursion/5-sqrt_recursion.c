#include "main.h"

/**
 * _sqrt_recursion - This function prints the natural root square of a number
 * @n: The natural number
 * Return: the value if the square is natural, if not, return -1
 */

int _sqrt_recursion(int n)

{
	if (n < 0)
	{
		return (-1);
	}
	return (scnd_sqrt_recursion(n, 0));
}

/**
 * scnd_sqrt_recursion - This function prints the natural root square
 * of a number
 * @n: The natural number
 * @q: Iterator
 * Return: the value if the square is natural, if not, return -1
 */

int scnd_sqrt_recursion(int n, int q)

{
	if ((q * q) > n)
	{

		return (-1);
	}
	if ((q * q) == n)
	{
		return (q);
	}
	return (scnd_sqrt_recursion(n, q + 1));
}
