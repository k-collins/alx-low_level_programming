#include <stdio.h>
#include "main.h"

/**
* _strchr - () this function that will locates a characs in a string.
* @strs: string to search
* @characs: char to search for
*
* Return: a pointer to the first occurrence of the characs
* in the string, or NULL if the characs is not found
*/

char *_strchr(char *strs, char characs)
{
while (*strs != '\0')
{
	if (*strs == characs)
	{
	return (strs);
	}
	else
	strs++;
}

if (*strs == characs)
{
	return (strs);
}
else
{
	return ('\0');
}
}
