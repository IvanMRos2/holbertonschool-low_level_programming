#include "main.h"
#include <stdio.h>

/**
 * _memset - This function fills memory with a constant byte
 * @s: Area of memory to be filled
 * @b: Characters to copy
 * @n: Numbers of times to copy b
 *
 * Return: Pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

		for (i = 0; i < n; i++)
		{
			s[i] = b;
		}
	return (s);
}
