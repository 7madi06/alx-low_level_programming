#include <main.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory,
 * @b: the size of mem.
 * Return: ptr to the mem.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
