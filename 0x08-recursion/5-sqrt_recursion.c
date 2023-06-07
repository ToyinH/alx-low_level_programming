#include "main.h"
#include <stdbool.h>
#include <math.h>

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * test - testing the guess for the squareroot
 * closeEnough: function that return true or false to close enough guess to
 * square root of number
 * betterGuess: function that returns the betterGuess than the closeEnough
 * @n - the number
 * @x: the number to find its squareroot
 * @g: the guess number
 * Return: the square of the number
 *
 */

double test(double x, double g);
/**
 * @x: the number to test
 * @g: guess number
 */
bool closeEnough(double a, double b);
double betterGuess(double x, double g);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return ((int)test((double)n, 1.0));
	}

}

double test(double x, double g)
/**
 * test - function to testing the guess
 *
 */
{
	if (closeEnough(x / g, g))
	{
		return (g);
	}
	else
	{
		return (test(x, betterGuess(x, g)));
	}
}

bool closeEnough(double a, double b)
/**
 * closeEnough -function returns true for closeEnough squareroot
 *
 */
{
	if (fabs(a - b) < 0.001)
	{
		return (true);
	}
	else
	{
		return (false);
	}
}

double betterGuess(double x, double g)
/**
 * betterGuess - funtion that returns betterguess
 *
 */
{
	return ((g + x / g) / 2);
}


