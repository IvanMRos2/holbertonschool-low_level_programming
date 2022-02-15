#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet
 * Return: No return
 */

void print_alphabet_x10(void)
{
	int alf = 0;
	char ten;

	while (alf < 10)
	{
		for (ten = 'a'; ten <= 'z'; ten++)
		{
			_putchar(ten);
		}
		_putchar('\n');
	}	alf++;
}
