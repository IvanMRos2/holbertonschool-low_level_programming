#include <stdio.h>

/**
 * main - This program prints the alphabet in lowercase
 * and then prints it in uppercase
 *
 * Return: zero
 */

int main(void)
{
	char alf;

	for (alf = 'a'; alf != 'z'; alf++)
	{
		putchar(alf);
	}
	for (alf = 'A'; alf != 'Z'; alf++)
	{
		putchar(alf);
	}
	putchar('\n');
	return (0);
}
