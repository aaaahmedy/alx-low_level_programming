#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at a given index.
* @n: the number.
* @index: the index.
* Return: 1 if it worked, or -1 if an error occurred.
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp;

	if (index > 64)
		return (-1);
	temp = 1UL << index;
	*n |= temp;
	return (1);
}
