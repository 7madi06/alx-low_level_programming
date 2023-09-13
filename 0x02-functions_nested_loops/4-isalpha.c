#include "main.h"

/**
 * _isalpha - function that checks if input is lowercase or uppercase
 * Description: check if is alpha
 * @c: This is a character in ASCII code.
 * Return: 1 if input is lowercase or uppercase or 0 if not (Success)
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))

		return (1);

	else
		return (0);

	_putchar('\n');
}
