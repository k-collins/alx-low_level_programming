#include "main.h"
/**
 * _islower - function to check lower case
 *
 * 
 * Return 1 if true, else 0 
 *
 */

int _islower(int alphabeth)
{
	if (alphabeth >= 'a' && alphabeth <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
