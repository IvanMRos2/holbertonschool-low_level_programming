#include "main.h"

/**
 * print_square - This function prints a square using #
 * @size: Is the variable to return the form
 */

void print_square(int size)
{
	int w, h;

	if (size <= 0)
	{
		putchar('\n');
	}
	for (h = 0; h < size; h++)
	{
		for (w = 0; w < size; w++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
