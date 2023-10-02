#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: its argc.
 * @argv: its argv.
 * Return: 0 == no errors :).
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
