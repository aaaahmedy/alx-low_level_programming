#include "dog.h"
#include <stdio.h>

/**
* init_dog -  initialize a variable of type struct dog.
* @d: the dogs.
* @name: the name.
* @age: the age.
* @owner: the owner.
* Return: Always 0.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
