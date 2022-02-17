#include "main.h"

/**
 * print_diagonal - This function prints slash with spaces
 * @n: number of slash to input
 */

void print_diagonal(int n)
{
	int spaces = 0, slash = 0;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}
	while (slash < n)
	{
		spaces = 0;
		while (spaces < slash)
		{
			_putchar(' ');
			spaces++;
		}
		_putchar(92);
		_putchar('\n');
		slash++;
	}
}
