#include "main.h"

/**
 * reset_to_98 - swaps the values of two integers.
 * @a : int
 * @b : int
*/

void swap_int(int *a, int *b)
{
    int *c = *a;
    *a = *b;
    *b = *c;
}