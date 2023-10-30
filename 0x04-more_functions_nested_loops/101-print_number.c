#include "main.h"

/**
 * print_number - this function will function that prints an integer
 * @num: the number to be printed
 */

void print_number(int num)
{
	unsigned int tenth, value, positive_num = num;
	double check_int = 1;

	if (num == 0)
		putchar('0');
	else
	{
		if (num < 0)
		{
			positive_num = num * -1;
			putchar('-');
		}

		while (check_int <= positive_num)
			check_int *= 10;
		tenth = check_int / 10;

		while (tenth >= 1)
		{
			value = positive_num / tenth;
			putchar(value + '0');
			positive_num = (positive_num - (tenth * value));
			tenth /= 10;
		}
	}
}
