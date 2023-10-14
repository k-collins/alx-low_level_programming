include "main.h"
/**
 * _isalpha - the function
 *
 * @ifAlphabeth: input to check
 *
 * Return: return 1 if success, else 0
 *
 */

int _isalpha(int ifAlphabeth)
{
	if ((ifAlphabeth >= 'a' && ifAlphabeth <= 'z')
	|| (ifAlphabeth >= 'A' && ifAlphabeth <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}
