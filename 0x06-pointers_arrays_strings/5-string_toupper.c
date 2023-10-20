#include <stdio.h>

/**
* string_toupper - ()this function will changes all lowercase letters
* of a string to upperCase
* @main_str: string to change
* Return: it returns string with all letters capitalized
*/

char *string_toupper(char *main_str)
{

int counter;

for (counter = 0; main_str[counter] != '\0'; counter++)
{
	if (main_str[counter] >= 'a' && main_str[counter] <= 'z')
	main_str[counter] = main_str[counter] - 'a' + 'A';
}
return (main_str);
}
