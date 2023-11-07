#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_dog - print the info of a dog.
* @d: the dog struct.
* Return: always 0.
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
