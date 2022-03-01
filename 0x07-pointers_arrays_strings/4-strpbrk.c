#include "main.h"

/**
 * _strpbrk - This function searches a string for any of a set of bytes
 * @s: The string to be checked
 * @accept: The string to look for
 * Return: s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
