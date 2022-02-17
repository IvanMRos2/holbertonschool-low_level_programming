#include "main.h"

/**
 * more_numbers - This function prints 10 times the numbers from 0 to 14
 */

void more_numbers(void)
{
	int line;
	char column;

	for (line = 0; line <= 9; line++)
	{
		for (column = 0; column <= 14 ; column++)
		{
			if (column > 9)
			{
				_putchar ((column / 10) + '0');
			}
			_putchar ((column % 10) + '0');
		}
			_putchar ('\n');
	}
}
