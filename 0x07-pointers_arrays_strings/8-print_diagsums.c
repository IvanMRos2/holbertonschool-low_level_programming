#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - This function prints the sum of 2 diagonals
 * @a: This is the string
 * @size: This variable shows the size of the matrix
 * Return: No return
 */

void print_diagsums(int *a, int size)
{
	int i, j, temp, add1 = 0, add2 = 0;

	for (i = 0; i < size; i++)
	{
		temp = (i * size) + i;
		add1 += *(a + temp);
	}

	for (j = 0; j < size; j++)
	{
		temp = (j * size) + (size - 1 - j);
		add2 += *(a + temp);
	}
	printf("%d, %d\n", add1, add2);
}
