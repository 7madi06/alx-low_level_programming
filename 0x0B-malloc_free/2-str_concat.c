#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string.
 * @s2: secound string.
 * Return: pointer.
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int len_s1 = 0, len_s2 = 0, total_len = 0;
	int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len_s1] != '\0')
	{
		len_s1++;
	}

	while (s2[len_s2] != '\0')
	{
		len_s2++;
	}

	total_len = len_s1 + len_s2;

	concatenated = (char *)malloc(total_len + 1);

	if (concatenated == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len_s1; i++)
	{
		concatenated[i] = s1[i];
	}

	for (j = 0; j < len_s2; j++)
	{
		concatenated[i + j] = s2[j];
	}

	concatenated[total_len] = '\0';

	return (concatenated);
}
