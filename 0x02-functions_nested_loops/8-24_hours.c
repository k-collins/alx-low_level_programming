#include "main.h"

/**
 *jack_bauer- Function to every minutes
 */

void jack_bauer(void)
{
	int hour;
	int minutes;

	for (hour = 0; hour < 24; hour++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			putchar('0' + (hour / 10));
			putchar('0' + (hour % 10));
			putchar(':');
			putchar('0' + (minutes / 10));
			putchar('0' + (minutes % 10));
			putchar('\n');
		}
	}
}

