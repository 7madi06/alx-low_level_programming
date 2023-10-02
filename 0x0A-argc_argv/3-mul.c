#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: its argc.
 * @argv: its argv.
 * Return: 0 == no errors :).
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
