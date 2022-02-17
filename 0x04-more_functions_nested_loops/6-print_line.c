#include "main.h"

/**
 * print_line - This function prints a stright line
 * @n: The number of lines to be printed
 */

void print_line(int n)
{
	int line;

	if (n > 0)
	{
	for (line = 0; line <= n; line++)

	_putchar ('_');
	}
	_putchar ('\n');
}
