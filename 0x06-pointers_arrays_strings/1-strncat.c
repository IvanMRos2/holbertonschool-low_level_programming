#include "main.h"

/**
 * _strcat - This function concatenates two strings
 *
 * @dest: String with "hello"
 * @src: String with "world"
 * Return: The string dest concatenated with src
 */

char *_strncat(char *dest, char *src, int n)
{
	int hello = 0, world = 0, hw = 0;
	while (dest[hello] != '\0')
	{
		hello++;
	}
	        while ((dest[hello + world] = *src++) != '\0' && hw < n - 1)
	{
	        hw++;
		world++;
	}
	return (dest);
}
