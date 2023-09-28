#include "main.h"

/**
 * pwr - returns the natural square root of a number.
 * @n: int.
 * @c: int.
 * Return: square root or -1.
 */
int pwr(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + pwr(n, c + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: int.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (pwr(n, 2));
}
