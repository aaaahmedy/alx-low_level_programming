#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* new_dog - create a new dog.
* @name: the name.
* @age: the age.
* @owner: the owner.
* Return: the new dog.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog, *copy;

	newDog = (dog_t *)malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;

	copy = (dog_t *)malloc(sizeof(dog_t));
	if (copy == NULL)
		return (NULL);
	copy->name = name;
	copy->owner = owner;
	return (newDog);
}
