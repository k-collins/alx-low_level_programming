#include "main.h"
/**
 * print_sign - check sign
 *
 * @n: check for d value
 *
 * Return: if +ve == 1, -ve == -, else == 0
 i*
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
