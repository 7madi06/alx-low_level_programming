#include <stdio.h>
#include <stdlib.h>
/**
 * main - entrypoint.
 * Return: 1.
 */
int main(void)
{
	int cents, coins[] = {25, 10, 5, 2, 1};
	int total_coins = 0;

	printf("Enter the amount of cents: ");
	if (scanf("%d", &cents) != 1)
	{
		fprintf(stderr, "Error: Invalid input\n");
		return (1);
	}

	if (cents >= 0)
	{
		for (int i = 0; i < 5; i++)
		{
			total_coins += cents / coins[i];
			cents %= coins[i];
		}
	}

	printf("%d\n", total_coins);

	return (0);
}
