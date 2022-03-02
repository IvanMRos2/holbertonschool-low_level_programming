#include "main.h"

/**
 * _pow_recursion - This function returns a pow of a base
 * elevated to it's exponent
 * @x: The number base
 * @y: The number exponential
 * Return: The result of the pow, if y is lower than 0, return -1
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
