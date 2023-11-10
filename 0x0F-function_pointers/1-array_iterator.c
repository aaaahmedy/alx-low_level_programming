#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: iterate over
 * @size: size of the array
 * @action: pointer to function used
 * Return: always 0.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (!array || !action)
		exit(98);
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
