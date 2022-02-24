#include "main.h"
#include <stdio.h>

/**
 * print_rev - This function prints a string in reverse
 * @s: The string to be printed
 */

void reverse_array(int *a, int n)
{
	int rev = 0;
	int temp = 0;
	
	while (rev < n - 1)
		{
			temp = a[rev];
			a[rev] = a[n];
			a[n] = temp;

			rev++;
			n--;
		}
}
