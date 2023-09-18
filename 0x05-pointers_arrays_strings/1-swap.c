#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int
 *				and updates the value it points to > 98
 * @a : int
 * @b : int
*/

void swap_int(int *a, int *b)
{
    int *c = *a;
    *a = *b;
    *b = *c;
}
