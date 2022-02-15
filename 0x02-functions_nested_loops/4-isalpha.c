#include "main.h"
/**
 * _isalpha - Checks the lowercase characters
 * @c: The character that is variable
 * Return: if c is lowercase or uppercase 1, else 0
 */
int _isalpha(int c)

{
	if (((c >= 'a') && (c <= 'z'))
		|| ((c >= 'A') && (c <= 'Z')))

	return (1);
	else
	return (0);
}
