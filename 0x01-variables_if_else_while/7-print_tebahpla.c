#include <stdio.h>

/**
 * main - This program prints the alphabet in lowercase
 * but in reverse
 * Return: zero
 */

int main(void)
{
	char fla;

	for (fla = 'z'; fla >= 'a'; fla--)
	{
		putchar(fla);
	}
	putchar('\n');
	return (0);
}
