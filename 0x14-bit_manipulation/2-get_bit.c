#include "main.h"

/**
* get_bit - returns the value of a bit at a given index.
* @n: the number.
* @index: is the index.
* Return: value of the bit at index index or -1 if an error occured.
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp;

	if (index > 64)
		return (-1);
	temp = n >> index;
	return (temp & 1);
}
