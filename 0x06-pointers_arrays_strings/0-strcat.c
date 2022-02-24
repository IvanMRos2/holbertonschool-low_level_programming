#include "main.h"

/**
 * _strcat - This function concatenates two strings
 *
 * @dest: String with "hello"
 * @src: String with "world"
 * Return: The string dest concatenated with src
 */

char *_strcat(char *dest, char *src)
{
	int hello = 0, world = 0;

	while (dest[hello] != '\0')
	{
		hello++;
	}
	while ((dest[hello + world] = *src++) != '\0')
	{
		world++;
	}
	return (dest);
}
