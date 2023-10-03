#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments.
 * @ac: argc.
 * @av: argv.
 * Return: pointer.
 */

char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i, j, k;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			total_length++;
		}
		total_length++;
	}

	result = (char *)malloc(total_length + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[k++] = av[i][j];
		}
		result[k++] = '\n';
	}

	result[k] = '\0';

	return (result);
}
