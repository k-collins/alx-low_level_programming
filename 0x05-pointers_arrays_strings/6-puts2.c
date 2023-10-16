#include <stdio.h>
#include "2-strlen.c"
/**
 * puts2 - it will put string
 *
 * @s: string to put
 */
void puts2(char *s)
{
	int i;

	for (i = 0; i < _strlen(s); i++)
	{
		if (i % 2 == 0)
		{
			putchar(s[i]);
		}
	}
	putchar('\n');
}
