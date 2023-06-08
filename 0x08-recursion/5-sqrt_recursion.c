#include "main.h"
#include <stdbool.h>
#include <math.h>

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: the number
 *
 * Description: y^2 = n, so n/y = y
 * so guessing, when n/g = g, that is the squareroot
 * @x: the number to find its squareroot
 * @g: the guess number
 *
 * Return: the square of the number
 */

double test(double x, double g);
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

/**
 * test - function to test the guess
 * @x: the number to find its square root
 * @g: the guess
 *
 * Return: the squareroot
 */

double test(double x, double g)
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

/**
 * closeEnough - function that retruns true for closeEnough squareroot
 * @a: the number which represent x/g
 * @b: the guess since x/g should be close to g
 * if equal, it is the square root
 *
 * Return: true or false
 */

bool closeEnough(double a, double b)
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

/**
 * betterGuess - function that returns better guess
 * @x: the number to find its square root
 * @g: the guess number
 *
 * Return: the better guess
 */
double betterGuess(double x, double g)
{
	return ((g + x / g) / 2);
}


