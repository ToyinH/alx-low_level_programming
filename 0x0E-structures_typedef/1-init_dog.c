#include <stdio.h>
#include "dog.h"
#include "main.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @name: name of dog
 * @d: pointer to struct dog to initiate
 * @age: age of dog
 * @owner: owner of dog
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
