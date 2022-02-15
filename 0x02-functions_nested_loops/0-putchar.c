#include "main.h"
/**
 * main - This program prints "_putchar"
 *
 * Return: zero
 */

int main(void)
{
	char p[] = "_putchar\n";
	int c;

	for (c = 0; c < 9; c++)
	{
		_putchar(p[c]);
	}

	return (0);
}
