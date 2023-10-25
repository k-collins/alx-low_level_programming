#include "main.h"
#include <stdio.h>

/**
* _strspn - () this function will gets the length of a prefix substring.
* @strs: String to search
* @accept: The bytes to be accepted
*
* Return: it will return the length of a prefix substring.
*/

unsigned int _strspn(char *strs, char *accept)
{
	unsigned int read, i, j, a;

	read = i = 0;
	while (strs[read] != 0)
	{
		j = 0;
		a = 0;

		while (accept[j] != 0)
		{
			if (strs[read] != accept[j])
			{
				j++;
			}
			else if (strs[read] == accept[j])
			{
				a++;
				i++;
				j++;
			}
		}

		if (a == 0)
		{
			return (i);
		}

		read++;
	}

	return (i);
}
