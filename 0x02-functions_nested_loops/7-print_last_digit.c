#include "main.h"

/**
 * print_last_digit - to print the last digit
 *
 * @number: the value given
 *
 * Return: return the last number
 */
int print_last_digit(int number)
{
	int last_digit = number % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	_putchar('0' + last_digit);


	return (last_digit);
}
