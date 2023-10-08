#include <stdlib.h>
/**
 * array_range - concatenates two strings,
 * @min: start of array.
 * @max: end of array.
 * Return: ptr to the array.
 */

int *array_range(int min, int max)
{
	if (min > max)
	{
		return (NULL);
	}

	int *array;
	int size = max - min + 1;

	array = (int *)malloc(size * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (int i = 0; i < size; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
