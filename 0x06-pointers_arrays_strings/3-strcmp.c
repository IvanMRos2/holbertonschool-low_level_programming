#include "main.h"

/**
 * _strcmp - This function compares two strings
 * @s1: Firts string to be compared
 * @s2: Second string to be compared
 * Return: the difference of  the strings
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
