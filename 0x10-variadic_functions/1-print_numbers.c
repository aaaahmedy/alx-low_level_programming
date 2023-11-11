#include "variadic_functions.h"
#include <stdio.h>

/**
* print_numbers -  prints numbers, followed by a new line.
* @separator: the string to be printed between numbers
* @n: the number of arguments.
* @...: the arguments.
* Return: Always 0;
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));
		if (i < n - 1)
			printf("%s", separator ? separator : "");
	}
	va_end(ptr);
	printf("\n");
}
