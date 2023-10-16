#include <stdio.h>
#include "2-strlen.c"
/**
 * rev_string - () will reverse a string value
 *
 * @str: argunment string to print
 */

void rev_string(char *str)
{
	int i;
	char t;

	for (i = 0; i < _strlen(str) / 2; i++)
	{
		t = str[i];
		str[i] = str[_strlen(str) - i - 1];
		str[_strlen(str) - i - 1] = t;
	}
}
