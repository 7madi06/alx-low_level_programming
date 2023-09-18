#include "main.h"
#include <string.h>

/**
* print_rev - prints a string, in reverse, followed by a new line.
* @s : int
*/

void print_rev(char *s)
{
	int c, i, j;

	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
