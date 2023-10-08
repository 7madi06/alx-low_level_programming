#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings,
 * @s1: string 1.
 * @s2: string 2.
 * Return: ptr to the full string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, totalLen, i, j;
	char *result;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
		{
			len1++;
		}
	}

	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
		{
			len2++;
		}
	}

	if (n >= len2)
	{
		n = len2;
	}

	totalLen = len1 + n;
	result = (char *)malloc(totalLen + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		result[i + j] = s2[j];
	}

	result[totalLen] = '\0';

	return (result);
}
