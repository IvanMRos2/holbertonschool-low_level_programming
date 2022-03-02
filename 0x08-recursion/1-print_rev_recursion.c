#include "main.h"

/**
 * _print_rev_recursion - This function prints a string in reverse
 * @s: This is the string to be printed
 * Return: No return
 */

void _print_rev_recursion(char *s)
{
	if (!s || !*s)
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
