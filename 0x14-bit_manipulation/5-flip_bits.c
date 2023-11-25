#include "main.h"

/**
* flip_bits - returns the number of bits you would need to flip.
* @n: the number to fflip.
* @m: the number to copy from.
* Return: the numbers of bits.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int cmpt = 0;
	unsigned long int bits;

	bits = n ^ m;
	while (bits != 0)
	{
		bits &= (bits - 1);
		cmpt++;
	}
	return (cmpt);
}
