#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: its argc.
 * @argv: its argv.
 * Return: 0 == no errors :).
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
