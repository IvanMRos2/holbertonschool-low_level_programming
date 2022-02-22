#include "main.h"

/**
 * puts_half - This function prints the fald of a string
 * @str: String to be printed
 */
void puts_half(char *str)
{
	int Len = 0, h = 0, m;

	while (str[h++])
		Len++;

	if ((Len % 2) == 0)
		m = Len / 2;

	else
		m = (Len + 1) / 2;
	for (h = m; h < Len; h++)
		_putchar(str[h]);
	_putchar('\n');
}
