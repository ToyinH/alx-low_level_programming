#include "main.h"
/**
 *
 *
 *
 */
int is_prime_number(int n)
{
	int i;
	i = n /2;
	
	if (n <= 1)
	{
		return 0;
	}

	if (i == 1)
	{
		return 1;
	}
	if (n % i == 0)
	{
		return 0;
	}
	else
	{
		i = i - 1;
		is_prime_number(n);
	}
}
