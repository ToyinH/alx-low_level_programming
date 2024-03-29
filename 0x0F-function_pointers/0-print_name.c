#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: string
 * @f: function that takes a string argument
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
