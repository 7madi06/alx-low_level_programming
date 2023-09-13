#include "main.h"

/**
 * _islower - function that checks if input is lowercase
 * @c: This is a character in ASCII code.
 * Return: 1 if input is lowercase or 0 if not (Success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)

		return (1);

	else
		return (0);

	_putchar('\n');
}
