#include "main.h"

/**
 * _mempcy - Copies memory area
 * @dest: Destination
 * @char: Characters to copy
 * @n: Numbers of bytes to copy
 *
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
