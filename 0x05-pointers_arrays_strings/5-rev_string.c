#include "main.h"

/**
 * rev_string - This function reverses a string
 *@s: The string
 */

void rev_string(char *s)
{
	int Len = 0, Rev = 0;
	char r;

	while (s[Rev++])
		Len++;
	for (Rev = Len - 1; Rev >= Len / 2; Rev--)
	{
		r = s[Rev];
		s[Rev] = s[Len - Rev - 1];
		s[Len - Rev - 1] = r;
	}
}
