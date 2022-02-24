#include "main.h"

/**
 * leet - changes characters
 *
 * Return: string
 */ 

char *leet(char *str)
{
	int lt;
	int nm;
	char ltr[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l', '\0'};
	char num[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1', '\0'};

	for (lt = 0; str[lt] != '\0'; lt++)
	{
		for (nm = 0; ltr[nm] != '\0'; nm++)
		{
			if (str[lt] == ltr[nm])
			{
				str[lt] = num[nm];
		}	}
	}
	return (str);
}
