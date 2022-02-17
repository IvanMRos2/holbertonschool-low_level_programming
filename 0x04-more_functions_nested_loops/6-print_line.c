#include "main.h"

/**
 * print_line - This function prints a stright line
 * @n: The number of lines to be printed
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar ('_');
		n--;
	}
	_putchar ('\n');
}
