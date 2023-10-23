#include "main.h"
#include <stdio.h>

/**
 * _isdigit - a function that checks for a digit (0 through 9)
 *
 * @c: The parameter to check
 *
 * Return: Returns 1 is uppercase, 0 if otherwise
 *
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
