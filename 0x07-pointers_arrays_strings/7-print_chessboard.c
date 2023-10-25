#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - this function will printschessboard.
 * @a: array parameter
 */

void print_chessboard(char (*a)[8])
{
	unsigned int read1, read2;

	read1 = 0;
	while (read1 < 8)
	{
		read2 = 0;
		while (read2 < 8)
		{
			_putchar(a[read1][read2]);
			read2++;
		}
		_putchar('\n');
		read1++;
	}
}
