#include "main.h"

/**
 * puts2 - Prints every character jumping over one
 * @str: String to be printed
 */

void puts2(char *str)
{
	int Len = 0, evtwo;

	while (str[Len] != '\0')
	{
		Len++;
	}
	for (evtwo = 0; evtwo < Len; evtwo++)
	{
		if (evtwo % 2 == 0)
		{		
		_putchar(str[evtwo]);
		}
	}
	_putchar('\n');
}
