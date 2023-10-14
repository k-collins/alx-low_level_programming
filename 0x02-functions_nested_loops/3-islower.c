#include "main.h"
/**
 * _islower - function to check lower case
 *
 * 
 * Return 1 if true, else 0 
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
