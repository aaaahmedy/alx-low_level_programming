#include "main.h"
#include <stdlib.h>

/**
* print_binary -  prints the binary representation of a number.
* @n: the integer.
* Return: Always 0.
*/

void print_binary(unsigned long int n)
{
	int revers = 0;
	unsigned long int bits;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	bits = n;
	while ((bits >>= 1) > 0)
		revers++;
	while (revers >= 0)
	{
		if ((n >> revers) & 1)
			_putchar('1');
		else
			_putchar('0');
		revers--;
	}
}
