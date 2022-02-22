#include "main.h"

/**
 * _strcpy - Copies a string pointed to src to a buffer pointed to dest
 *
 * @dest: The destiny buffer
 * @src: The source string
 *
 * Return: Dest
 */

char *_strcpy(char *dest, char *src)
{
	int array = 0, copy = 0;

	while (src[array] != '\0')
	{
		array++;
	}
	for (copy = 0; copy < array; copy++)
	{
		dest[copy] = src[copy];
	}
	dest[array] = '\0';

	return (dest);
}
