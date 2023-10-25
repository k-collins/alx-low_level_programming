#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - () function that searches a string for any of a set of bytes.
 * @strs: Str to be search
 * @accept: acceptable bytes
 *
 * Return: it will return  pointer to the byte in 
 * strs that matches one of the bytes
 */

char *_strpbrk(char *strs, char *accept)
{
	unsigned int read1 = 0, read2;
	char *ByteChecker;

	while (strs[read1] != 0)
	{
		read2 = 0;
		while (accept[read2] != 0)
		{
			if (strs[read1] == accept[read2])
			{
				ByteChecker = &strs[read1];
				return (ByteChecker);
			}
			read2++;
		}
		read1++;
	}
	return (0);
}
