#include <stdio.h>
#include <stdlib.h>
/**
 * main - entrypoint.
 * Return: 1.
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int cents, coins = 0;
	int total_coins [] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	for (int i = 0; i < sizeof(total_coins) / sizeof(total_coins[0]); i++)
	{
		coins += cents / total_coins[i];
		cents %= total_coins[i];
	}

	printf("%d\n", coins);
	return (0);
}
