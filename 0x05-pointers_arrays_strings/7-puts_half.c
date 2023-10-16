#include <string.h>
#include "2-strlen.c"

/**
 * puts_half - () will put half
 *
 * @s: string to split
 */
void puts_half(char *s)
{
	int i;
	int split = 0;

	if (_strlen(s) % 2 != 0)
	{
		split += 1;
	}
	for (i = (_strlen(s) + split) / 2; i < _strlen(s); i++)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
