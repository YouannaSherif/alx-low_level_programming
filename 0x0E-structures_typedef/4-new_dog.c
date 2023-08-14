#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog -creates a new dog
 *
 * @name: points to a string
 * @age: a parameter
 * @owner: poins to a string
 *
 * Return: new dog
 * NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);

	dog = malloc(sizeof(dog_t));
		if (dog == NULL)
			return (NULL);

	dog->name = malloc(sizeof(char *) * strlen(name) + 1);
		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}
	dog->owner = malloc(sizeof(char *) * strlen(owner) + 1);
		if (dog->owner == NULL)
		{
			free(dog);
			free(dog->name);
			return (NULL);
		}
	dog->name = strcpy(dog->name, name);
	dog->owner = strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
