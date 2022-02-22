#include "main.h"
#include <stdio.h>

/**
 * print_array - This function prints number of elements of an array
 * @a: The array of integers
 * @n: The elements to be printed
 */

void print_array(int *a, int n)
{
	int array;

	for (array = 0; array < n; array++)
	{
		if (array == 0)
			printf("%d", a[array]);
		else
			printf(", %d", a[array]);
	}
		printf("\n");
}
