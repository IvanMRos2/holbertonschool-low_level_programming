#include <stdio.h>

/**
 * main - This program prints the alphabet in lowercase
 * except the letters e and q
 *
 * Return: zero
 */

int main(void)
{
	char alf;

	for (alf = 'a'; alf <= 'z'; alf++)
	{
		if (alf != 'e' && alf != 'z')
		{
		putchar(alf);
		}
	}
	putchar('\n');
	return (o);
}
