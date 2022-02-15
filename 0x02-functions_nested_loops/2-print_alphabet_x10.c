#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet
 * Return : No return
 */

void print_alphabet_x10(void)
{
	char alf;
	int ten = 0;

	while (ten++ < 10)
	{
		for (alf = 'a'; alf <= 'z'; alf++)
		{
			_putchar(alf);
		}
		_putchar('\n');
	}
}
