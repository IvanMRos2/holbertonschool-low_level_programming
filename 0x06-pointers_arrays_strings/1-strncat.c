#include "main.h"

/**
 * _strncat - This function concatenates two strings
 *
 * @dest: String with "hello"
 * @src: String with "world"
 * @n: Number of parameters on the string
 * Return: The string dest concatenated with src
 */

char *_strncat(char *dest, char *src, int n)
{
	int hw = 0, w = 0;

	while (dest[hw] != '\0')
	{
		hw++;
	}
	while (src[w] != '\0' && w < n)
	{
		dest[hw] = src[w];
		hw++;
		w++;
	}

	return (dest);
}
