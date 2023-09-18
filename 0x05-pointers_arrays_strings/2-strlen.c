#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string.
 * @s : int
 * Return : the length of a string
*/

int _strlen(char *s)
{
    char *str = &s;
    char len = strlen(*str);
	return(len);
}
