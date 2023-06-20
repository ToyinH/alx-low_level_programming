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

int len(char *string);
char *string_copy(char *s1, char *s2);
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_lent;
	int owner_lent;
	dog_t *create_dog;

	create_dog = (dog_t *) malloc(sizeof(dog_t));
	if (create_dog == NULL)
	{
		return (NULL);
	}

	/*create memory to store name, free mem and return NULL if it failed*/
	name_lent = len(name);
	name = (char *)malloc(sizeof(name_lent) + 1);
	if (name == NULL)
	{
		free(create_dog);
		return (NULL);
	}

	/*create memory to store owner, free mem and return NULL if it failed*/
	owner_lent = len(owner);
	owner = (char *)malloc(sizeof(owner_lent) + 1);
	if (owner == NULL)
	{
		free(name);
		free(create_dog);
		return (NULL);
	}

	/*copy entered string into new dog created*/
	
	create_dog->name = string_copy(create_dog->name, name);
	create_dog->age = age;
	create_dog->owner = string_copy(create_dog->owner, owner);

	return (create_dog);
}

int len(char *string)
{
	int i = 0;

	while (string[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *string_copy(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		s1[i] = s2[i];
	}
	s1[i] = '\0';
	return (s1);

}
