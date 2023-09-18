#include "main.h"

/**
* rev_string - reverses a string.
* @s : char
*/

void rev_string(char *s)
{
	int i, j, count = 0;
	char c;

	while (s[count] != '\0')
		count++;

	j = count - 1;

	for (i = 0; i < count / 2; i++)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		j--;
	}
}
