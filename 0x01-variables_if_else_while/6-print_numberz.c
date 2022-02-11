#include <stdio.h>

/**
 * main - This program prints the numbers from 0 to 9,
 * but using the function putchar
 * Return: 0
 */

int main(void)
{
	int ten;

	for (ten = 0; ten < 10; ten++)
	{
		putchar(ten);
	}
	putchar('\n');
	return (0);
}
