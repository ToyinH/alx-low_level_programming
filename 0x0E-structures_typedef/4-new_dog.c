#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - funtion to create new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: return pointer to new dog created
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t create_dog;

	create_dog = malloc(sizeof(dog_t));
	if (create_dog == NULL)
	{
		return (NULL);
	}
	create_dog->name = name;
	create_dog->age = age;
	create_dog->owner = owner;

	return (create_dog);
}
