#include "main.h"
/**
 * print_alphabet - This program prints the alphabet in lowercase
 * Return: there is no return.
 */

void print_alphabet(void)
{
	int alf;

	for (alf = 97; alf <= 122; alf++)
	{
		_putchar(alf);
	}
	_putchar('\n');
}
