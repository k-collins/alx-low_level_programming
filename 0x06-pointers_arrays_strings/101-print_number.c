#include "main.h"

/**
* print_number - this function will prints an integer
* @n: the number to be printed
*/

void print_number(int n)
{
unsigned int tenth, value, positive = n;

double start = 1;

if (n == 0)
	putchar('0');
else
{
	if (n < 0)
	{
	positive = n * -1;
	putchar('-');
	}

	while (start <= positive)
	{
	start *= 10;
	}

	tenth = start / 10;

	while (tenth >= 1)
	{
	value = positive / tenth;
	putchar(value + '0');
	positive = (positive - (tenth * value));
	tenth /= 10;
	}
}
}
