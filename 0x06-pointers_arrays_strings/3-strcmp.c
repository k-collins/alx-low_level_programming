#include <stdio.h>

/**
* _strcmp - () this a function that compares two strings
* @first_str: first string
* @second_str: second string
* Return: () will return int that tells num spaces in between
*/

int _strcmp(char *first_str, char *second_str)
{
        int counter = 0;

        while (*(first_str + counter) == *(second_str + counter) && *(first_str + counter))
        {
	        counter++;
        }

        if (*(second_str + counter))
        {
	        return (*(first_str + counter) - *(second_str + counter));
        }
        else
        {
	        return (0);
        }
}
