#include "main.h"
#include <stdio.h>

/**
 * reverse_array - This function prints an array in reverse
 * @a: The array to be printed
 * @n: The number of bytes of the array
 */

void reverse_array(int *a, int n)
{
	int rev = 0;
	int temp = 0;

	while (rev < n)
	{
		temp = a[rev];
		a[rev] = a[n - 1];
		a[n - 1] = temp;

		rev++;
		n--;
	}
}
