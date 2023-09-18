#include "main.h"

/**
* rev_string - reverses a string.
* @s : char
*/

void rev_string(char *s)
{

	int i, j, count = 0;

	while (s[count] != '\0')
		count++;

	j = count - 1;
	char tempstr[500];

	for (i = 0; i < count; i++)
	{
		tempstr[i] = s[j];
		j--;
	}
}
