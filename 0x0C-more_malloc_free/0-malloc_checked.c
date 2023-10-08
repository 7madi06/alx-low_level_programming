#include <main.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

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
		write(STDERR_FILENO, "Error: malloc failed\n", 21);
		exit(98);
	}

	return (ptr);
}
