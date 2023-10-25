#include <stdio.h>
#include "main.h"

/**
 * set_string - () this function that sets the value of a pointer to a char.
 * @s: Pointer of pointer chaning
 * @toGet: Pointer to what we are setting it to
 */

void set_string(char **s, char *toGet)
{
	*s = toGet;
}
