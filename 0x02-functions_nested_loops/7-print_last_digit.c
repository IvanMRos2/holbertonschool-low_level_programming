#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @t: This is the whole number that we get the last digit
 * Return: The last digit
 */

int print_last_digit(int t)
{
	int digit = t % 10;

	if (digit < 0)
	{
		digit = -digit;
	}
	_putchar (digit + 48);
	return (digit);
}
