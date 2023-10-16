#include <stdio.h>

/**
 *_puts - ()to print string to stdout
 *
 * @strs: string to print
 */

void _puts(char *strs)
{
	int i;

	for (i = 0; *(strs + i) != '\0'; i++)
	{
		putchar(*(strs + i));
	}
	putchar('\n');
}
