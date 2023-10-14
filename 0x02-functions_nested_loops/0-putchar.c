#include "main.h"
/**
 * main - this is the entry point
 *
 * Return: it will return zero
 *
 */
int main(void)
{
	char putchars[] = "_putchar";
	int length = strlen(putchars);
	int i;

	for (i = 0; i < length; i++)
	{
		putchar(putchars[i]);
	}
	putchar('\n');
	return (0);
}
