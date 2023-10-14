#include "main.h"

/**
 * print_alphabet - it prints alphabeth
 *
 * Return: it returns zero
 *
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
