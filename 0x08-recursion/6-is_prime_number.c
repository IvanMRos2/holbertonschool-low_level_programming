#include "main.h"

/**
 * is_prime_number - this function checks if the integer is a prime number
 * _prime - this function checks if the integer is a prime number
 * @n: the number to be checked
 * Return: 1 if the number is prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_prime(n, n - 1));
}

/**
 * _prime - this function checks if the integer is a prime number
 * @n: the number to be checked
 * @i: the variable that iterates
 * Return: 1 if the number is prime, 0 if not
 */

int _prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (_prime(n, i - 1));
}
