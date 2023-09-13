#include "main.h"

/**
 * _islower - function that prints the alphabet10x
 * Description: 'prints the alphabet, 10 times'
 * Return: 1 if input is lowercase or 0 if not (Success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return(0);
	_putchar('\n');
}
