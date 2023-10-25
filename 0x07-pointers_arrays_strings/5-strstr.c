#include <stdio.h>
#include "main.h"

/**
* _strstr - function finds the first occurrence of the substring
* needle in the string haystack.The terminating null
* bytes (\0) are not compared
* @haystack: parameter Str to finder
* @needle: parameter Str to finder for
*
* Return: a pointer to the beginning of the located substring,
* or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	char *begin, *finder;

	while (*haystack != '\0')
	{
		begin = haystack;
		finder = needle;
		while (*finder == *haystack && *haystack != 0
		       && *finder != 0)
		{
			haystack++;
			finder++;
		}

		if (*finder == 0)
		{
			return (begin);
		}

		haystack = begin + 1;
	}

	return (0);
}
