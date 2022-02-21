#include "main.h"
#include <stdio.h>

/**
 * print_rev - This function prints a string in reverse
 * @s: The string to be printed
 */

void print_rev(char *s)
{
	int Stng = 0;
	int Lng;
	int Rev;

	while (s[Stng] != '\0')
	{
		Stng++;
	}

	Lng = Stng;

	for (Rev = Lng - 1; Rev >= 0; Rev--)
	{
		_putchar(s[Rev]);
	}
	_putchar('\n');
}
