#include "main.h"

/**
 * _strncpy - This function copies a string
 * @dest: Is the variable where the string will be copied
 * @src: Is the variable with the source content
 * @n: The position of the string
 * Return: returns the variable dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int copy;

	copy = 0;

	while (src[copy] != '\0' && copy < n)
	{
		dest[copy] = src[copy];
			copy++;
	}

	while (copy < n)
	{
		dest[copy] = '\0';
		copy++;
	}

	return (dest);
}
