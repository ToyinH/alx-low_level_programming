#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *
 */

int main(int argc, char *argv[])
{
	int cents;
	int numCoin = 0;

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
	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			numCoin++;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			numCoin++;
		}
		else if (cents >= 5)
		{
			cents -= 5;
			numCoin++;
		}
		else if (cents >= 2)
		{
			cents -= 2;
			numCoin++;
		}
		else
		{
			cents -= 1;
			numCoin++;
		}
	}
	printf("%d\n", numCoin);
	return (0);
}
