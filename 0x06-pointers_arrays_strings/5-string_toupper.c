#include "main.h"

/**
 * leet - changes characters
 *
 * Return: string
 */

char *string_toupper(char *str)
{
	int lw;
	int up;
	char lwr[] = {97 .. 122};
	char upr[] = {65 .. 90};

	for (lw = 0; str[lw] != '\0'; lw++)
	{
		for (up = 0; lwr[up] != '\0'; up++)
		{
		if (str[lw] == lwr[up])
		{
			str[lw] = upr[nm];
		}
		}
	{	
	return (str);
}
