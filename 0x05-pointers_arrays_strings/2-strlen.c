#include "main.h"
#include <string.h>
/**
 * _strlen - This function returns the length of a string
 * @s: The variable that points the string
 * Return: L
 */

int _strlen(char *s)
{
	int L = 0;

	while (*s != '0')
	{
		L++;
		s++;
	}

	return (L);
}
