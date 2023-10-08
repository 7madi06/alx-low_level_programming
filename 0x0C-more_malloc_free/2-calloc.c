#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements.
 * @size: size of each elements in array.
 * Return: ptr to array.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size = nmemb * size;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(total_size);

	if (ptr != NULL)
	{
		unsigned char *byte_ptr = (unsigned char *)ptr;

		for (unsigned int i = 0; i < total_size; i++)
		{
			byte_ptr[i] = 0;
		}
	}

	return (ptr);
}
