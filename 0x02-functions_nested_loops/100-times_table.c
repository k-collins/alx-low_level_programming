#include "main.h"

/**
 * print_times_table - Function that print n time table
 *
 * @number: argument it receives
 */

void print_times_table(int number)
{
	int table, times, results;

	if (number >= 0 && number <= 15)
	{
		for (table = 0; table <= number; table++)
		{
			for (times = 0; times <= number; times++)
			{
				results = (table * times);
				if (times == 0)
					_putchar('0' + results);
				else
				{
					_putchar(',');
					_putchar(' ');
					if (results <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + results);
					}
					else if (results > 9 && results < 100)
					{
						_putchar(' ');
						_putchar('0' + (results / 10));
						_putchar('0' + (results % 10));
					}
					else if (results >= 100)
					{
						_putchar('0' + (results / 100));
						_putchar('0' + ((results / 10) % 10));
						_putchar('0' + (results % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}
