#include "main.h"

void print_alphabet(void);

/**
 * print_alphabe - it prints alphabeth
 *
 * Return: it returns zero
 *
 */

int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
