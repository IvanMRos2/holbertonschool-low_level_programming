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
		putchar(44);
	}
			putchar ('\n');
			return (0);
}
