#include "main.h"

/**
 * print_alphabet_x10 - function that prints the alphabet10x
 * Description: 'prints the alphabet, 10 times'
 * Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 97; n < 123; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
