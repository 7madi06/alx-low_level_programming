#include "main.h"
#include <unistd.h>

/**
* puts2 - prints every other character of a string.
* @str : char
*/

void puts2(char *str)
{
	int i = 0;

	for ( ; str[i] != '\0'; i++)
	{
		write(1, str[i], 1);
		i++;
	}
	_putchar('\n');
}
