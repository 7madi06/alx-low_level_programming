#include "main.h"

/**
* puts_half - prints half of a string, followed by a new line.
* @str : char
*/

void puts_half(char *str)
{
	int i = 0, count = 0;

	while (str[count] != '\0')
		count++;

	for (i = (count + 1) / 2; i < count ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
