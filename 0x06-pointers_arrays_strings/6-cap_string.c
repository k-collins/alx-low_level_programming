#include <stdio.h>

/**
 * cap_string - ()this function will capitalizes all words of a string
 * @main_strr: string to change
 * Return: will return capitalized string
 */

char *cap_string(char *main_strr)
{
	int j = 0;

	if (main_strr[j] >= 'a' && main_strr[j] <= 'z')
		main_strr[j] = main_strr[j] - 'a' + 'A';
	j++;

	while (main_strr[j] != '\0')
	{
		if ((main_strr[j] >= 'a' && main_strr[j] <= 'z')
		    && (main_strr[j - 1] == ',' || main_strr[j - 1] == ';' || main_strr[j - 1] == '.' ||
			main_strr[j - 1] == '!' || main_strr[j - 1] == '?' || main_strr[j - 1] == '"' ||
			main_strr[j - 1] == '(' || main_strr[j - 1] == ')' || main_strr[j - 1] == '{' ||
			main_strr[j - 1] == '}' || main_strr[j - 1] == ' ' || main_strr[j - 1] == '\t'
			|| main_strr[j - 1] == '\n'))
			main_strr[j] = main_strr[j] - 'a' + 'A';
		j++;
	}

	return (main_strr);
}
