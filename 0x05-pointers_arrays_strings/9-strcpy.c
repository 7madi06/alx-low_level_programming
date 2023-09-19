#include "main.h"

/**
* _strcpy - prints n elements of an array of integers.
* @dest : char
* @src : char
* Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (dest_start);
}
