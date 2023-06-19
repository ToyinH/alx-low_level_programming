#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *
 */


void print_dog(struct dog *d)
{
	struct dog my_dog;
	if (d == NULL)
	{
		return;
	}
	if (name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (age == 0)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
	if (owner == NULL)
	{
		printf("Owner: (nil)\n")
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
