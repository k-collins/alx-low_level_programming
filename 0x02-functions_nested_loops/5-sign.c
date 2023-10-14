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
	char p = '+';
	char z = '0';
	char n = '-';

	if (n > 0)
	{
		putchar(p);
		return (1);
	}
	else if (n == 0)
	{
		putchar(z);
		return (0);
	}
	else
	{
		putchar(n);
		return (-1);
	}
	putchar('\n');
}
