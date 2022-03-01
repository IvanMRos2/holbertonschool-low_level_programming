#include "main.h"

/**
 * _strspn - This function gets the length of a prefix
 * @s: String to check
 * @accept: String with the characters to match in s
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{

	int count = 0;
	int k = 0;
	int z = 0;

		while (s[k] != '\0')
		{
			while (accept[z] != '\0')
			{
				if (accept[z] == s[k])
					count++;
				z++;
			}
			z = 0;
			k++;
			if (s[k] == 32)
			{
				break;
			}
		}
		return (count);
}
