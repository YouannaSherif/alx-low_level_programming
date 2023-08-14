#include <stdio.h>
#include "dog.h"

/**
 * init_dog -initialize a var of type struct dog
 *
 * @d: a variable of type struct dog
 * @name: points to a string
 * @age: a parameter
 * @owner: points to a string
 *
 * Return: 0 on success
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	}
}
