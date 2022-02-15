#include "main.h"

/** print_last_digit - Prints the last digit of a number
 * Return: The last digit
 */

int print_last_digit(int t)
{
	int digit = t % 10;

	if (digit < 0)
	{	digit = -t;
	}
	_putchar(digit + '0');
	return(digit);
}
