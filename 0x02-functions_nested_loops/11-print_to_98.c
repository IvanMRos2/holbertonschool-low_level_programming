#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Will always print any number and count to 98
 * @n: The number that will start on counting
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
	{
		printf("%d, ", n);
		if (n == 98)
		{
			break;
		}
		else
		{
			n++;
		}
	}
	}
	else if (n > 98)
	{
		while (n >= 98)
	{
			printf("%d, ", n);
			if (n == 98)
			{
				break;
			}
		else
		{
			n--;
		}
	}
}
}
