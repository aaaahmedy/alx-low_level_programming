#include "main.h"
#include <stddef.h>

/**
* binary_to_uint - converts a binary number to an int.
* @b: the binary number.
* Return: the converted number, or 0.
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (*(b + i))
	{
		if (*(b + i) != '1' && *(b + i) != '0')
			return (0);
		decimal = (decimal << 1) + (b[i] - '0');
		i++;
	}
	return (decimal);
}
