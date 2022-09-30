#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change for a given amount
 * @argc: number of command line args
 * @argv: array of string pointers
 * Return: number of coins or 1
 */
int main(int argc, char *argv[])
{
	int amount, i, change;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);
	change = 0;

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && amount >= 0; i++)
	{
		while (amount >= coins[i])
		{
			change++;
			amount -= coins[i];
		}
	}

	printf("%d\n", change);
	return (0);
}
