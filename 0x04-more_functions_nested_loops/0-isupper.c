#include <stdio.h>

/**
 * _isupper - a function that checks for uppercase character.
 *
 * @c - The parameter to check
 *
 * Return: Returns 1 is uppercase, 0 if otherwise
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
