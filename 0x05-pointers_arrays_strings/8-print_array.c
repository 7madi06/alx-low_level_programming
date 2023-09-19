#include "main.h"
#include <stdio.h>

/**
* print_array - prints n elements of an array of integers.
* @a : int
* @n : int
*/

void print_array(int *a, int n)
{
	int i = 0;

	for (; a[i] <= n; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}
