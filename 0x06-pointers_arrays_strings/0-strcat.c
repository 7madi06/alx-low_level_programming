#include "main.h"

/**
* _strcat - prints n elements of an array of integers.
* @dest : char
* @src : char
* Return: the pointer to dest
*/

char *_strcat(char *dest, char *src)
{
	int i, j, dest_len = 0, src_len = 0;

	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	int final_len = dest_len + src_len;

	i = dest_len;

	for (i = dest_len; i < final_len;)
	{
		for (j = 0; j < src_len; j++)
		{
			dest[i] = src[j];
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
