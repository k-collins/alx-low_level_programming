#include <stdio.h>
#include "2-strlen.c"
/**
 * _strcpy - () this function will copy
 *
 * @copyto: where to copy to
 * @copyfrom: where to copy from
 *
 * Return: a character value
 */
char *_strcpy(char *copyto, char *copyfrom)
{
	int i;

	for (i = 0; i <= _strlen(copyfrom); i++)
	{
		copyto[i] = copyfrom[i];
	}
	return (copyto);
}
