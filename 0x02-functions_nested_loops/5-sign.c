#include "main.h"

/**
 * print_sign - This script prints the sign of a number
 * @n: The variable number
 * Return: If the number is positive returns 1
 * If the number is zero prints 0
 * If the number is nevative returns -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
