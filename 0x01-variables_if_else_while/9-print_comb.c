#include <stdio.h>
/**
 * main - This program prints single combinations of the numbers
 * 0 to 9 separated by a comma
 * Return: zero
 */

int main(void)
{
	int comma;

	for (comma = 48; comma < 58; comma++)
	{
		putchar(comma);
		if (comma != 57)
		{
		putchar(44);
		putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
