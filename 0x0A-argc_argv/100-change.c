#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - function that accept command arguments
 * @money: the money used to cal num of coins
 * Return: 0 if succesful and non zero if otherwise
 */
int numOfCoins(int money);

int main(int argc, char *argv[])
{
	int cents;

	if (argv == NULL)
	{
		return (1);
	}
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	printf("%d\n", numOfCoins(cents));
	return (0);
}

/**
 * numOfCoins - function to count number of coins
 * @money: the money used to calculate coins
 *
 * Return: 0 if successful
 */
int numOfCoins(int money)
{
	int numCoin = 0;

	while (money > 0)
	{
		if (money >= 25)
		{
			money -= 25;
			numCoin++;
		}
		else if (money >= 10)
		{
			money -= 10;
			numCoin++;
		}
		else if (money >= 5)
		{
			money -= 5;
			numCoin++;
		}
		else if (money >= 2)
		{
			money -= 2;
			numCoin++;
		}
		else
		{
			money -= 1;
			numCoin++;
		}
	}
	return (numCoin);
}
