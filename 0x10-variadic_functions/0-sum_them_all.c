#include "variadic_functions.h"

/**
* sum_them_all - the sum of all its parameters.
* @n: the number of arguments.
* @...: other arguments.
* Return: the sum.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	int sum = 0;
	unsigned int i;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);
	va_end(ptr);
	return (sum);
}
