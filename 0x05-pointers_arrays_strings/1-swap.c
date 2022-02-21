#include "main.h"

/**
 * swap_int - This function swaps the values of two integers
 * @a: Variable with a value
 * @b: Variable with a value
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
