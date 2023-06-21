#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - add function
 * @a: first num
 * @b: second num
 *
 * Return: return addition result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract function
 * @a: first num
 * @b: second num
 *
 * Return: return sub result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply function
 * @a: first num
 * @b: second num
 *
 * Return: return product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division function
 * @a: first num
 * @b: second num
 *
 * Return: Return division result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modolos function
 * @a: first num
 * @b: second num
 *
 * Return: return modolos result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
