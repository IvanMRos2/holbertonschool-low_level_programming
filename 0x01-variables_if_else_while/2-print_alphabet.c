#include <stdio.h>

/**
 * main - This program prints the alphabet in lowercase
 *
 * Return: zero
 */

int main(void)
{
	char alf;

	for (alf = 'a'; alf <= 'z'; alf++)

		putchar(alf);
	putchar('\n');

	return (0);
}
