#include "main.h"

/**
 * string_toupper - Changes lowercase into uppercase
 * @str: String to be printed
 * Return: string
 */

char *string_toupper(char *str)
{
	int lw;

	for (lw = 0; str[lw] != '\0'; lw++)
	{
		if (str[lw] >= 97 && str[lw] <= 122)
	{
		str[lw] = str[lw] - 32;
	}
	}
	return (str);
}
