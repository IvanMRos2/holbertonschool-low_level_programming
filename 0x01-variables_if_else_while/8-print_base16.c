#include <stdio.h>

/**
 * main - This program prints the numbers 0 to 9
 * and then the letters a to f
 * Return: zero
 */

int main(void)
{
	int sxtn;

	for (sxtn = 48; sxtn < 58; sxtn++)
	{
		putchar(sxtn);
	}
	for (sxtn = 97; sxtn <= 102; sxtn++)
	{
		putchar(sxtn);
	}
	putchar('\n');
	return (0);
}
