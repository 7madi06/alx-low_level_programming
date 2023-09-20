#include "main.h"

/**
* _strncat - prints n elements of an array of integers.
* @dest : char
* @src : char
* @n : int
* Return: the pointer to dest
*/

char *_strncat(char *dest, char *src, int n)
{
	char *og_Dest = dest;
	int i, j, dest_len = 0, src_len = 0;

	while (*dest != '\0')
		dest++;

	for (int i = 0; i < n && *src != '\0'; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (og_Dest);
}
