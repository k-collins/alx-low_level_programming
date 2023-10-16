#include <stdio.h>
#include "2-strlen.c"

/**
 * print_rev - ()will reverse a string
 *
 * @s: string argument to print
 */

void print_rev(char *str)
{
	int i;

	for (i = _strlen(str) - 1; i >= 0; i--)
	{
		putchar(*(str + i));
	}
	putchar('\n');
}
