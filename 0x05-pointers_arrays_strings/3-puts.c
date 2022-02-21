#include "main.h"
#include <stdio.h>
/**
 * _puts - This function prints a string
 * @str: pointer to the string to print
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
