#include <stdio.h>
#include <stdlib.h>
/**
 * main - entrypoint.
 * Return: 1.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	int coins25 = cents / 25;

	cents %= 25;
	int coins10 = cents / 10;

	cents %= 10;
	int coins5 = cents / 5;

	cents %= 5;
	int coins2 = cents / 2;

	cents %= 2;
	int coins1 = cents;

	int total_coins = coins25 + coins10 + coins5 + coins2 + coins1;

	printf("%d\n", total_coins);

	return (0);
}




