#include "main.h"

/**
 * print_alphabet - function that prints the alphabet
 * Description: 'prints the alphabet, in lowercase, followed by a new line.'
 * Return: Always 0 (Success)
*/

void print_alphabet(void)
{
    int n;

    for (n = 97; n <= 122; n++)
    {
        _putchar(n);
    }
    _putchar('\n');

	return (0);
}
