#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - funtion to create new dog
 *@string: string
 * Return: return pointer to new dog created
 */

int len(char *string);
char *string_copy(char *s1, char *s2);
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_lent;
	int owner_lent;
	dog_t *create_dog;

	create_dog = malloc(sizeof(dog_t));
	if (create_dog == NULL)
	{
		return (NULL);
	}

	/*create memory to store name, free mem and return NULL if it failed*/
	name_lent = len(name);
	create_dog->name = malloc(sizeof(char) * (name_lent + 1));
	if (create_dog->name == NULL)
	{
		free(create_dog);
		return (NULL);
	}

	/*create memory to store owner, free mem and return NULL if it failed*/
	owner_lent = len(owner);
	create_dog->owner = malloc(sizeof(char) * (owner_lent + 1));
	if (create_dog->owner == NULL)
	{
		free(create_dog->name);
		free(create_dog);
		return (NULL);
	}

	/*copy entered string into new dog created*/
	create_dog->name = string_copy(create_dog->name, name);
	create_dog->age = age;
	create_dog->owner = string_copy(create_dog->owner, owner);

	return (create_dog);
}

/**
 * len - function to cal the length of string
 * @string: the string
 *
 * Return: return string length
 */

int len(char *string)
{
	int i = 0;

	while (string[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * string_copy - funtion to copy string
 * @s1: string 1
 * @s2: string 2
 *
 * Return: return pointer to copied string
 */

char *string_copy(char *s1, char *s2)
{
	char *ptr = s1;

	while (*s2 != '\0')
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (ptr);
}
