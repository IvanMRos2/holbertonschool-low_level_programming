#include "main.h"

/**
 * factorial - This function prints the factorial of a number
 * @n: The number to apply factorial
 * Return: Factorial of n, -1 if negative
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
