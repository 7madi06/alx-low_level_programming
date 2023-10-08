#include <main.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory,
 * @b: the size of mem.
 * Return: ptr to the mem.
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
