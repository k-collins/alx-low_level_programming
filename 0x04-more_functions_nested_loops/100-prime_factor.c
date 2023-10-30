#include <stdio.h>

/**
 * main -  this program will search and prints the
 * largest prime factor of the digits number 612852475143
 * Return: will return 0 on success
 */

int main(void)
{
	unsigned long digits = 612852475143, divi_2 = 2;

	while (divi_2 < digits)
	{
		if (digits % divi_2 == 0)
		{
			digits /= divi_2;
			divi_2 = 2;
		}
		else
			divi_2++;
	}
	printf("%lu\n", digits);
	return (0);
}
