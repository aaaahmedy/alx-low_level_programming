#include "variadic_functions.h"
#include <stdio.h>

/**
* print_strings - prints strings, followed by a new line.
* @separator: string separator.
* @n: number of arguments passed.
* @...: number of aruments.
* Return: Always 0.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *string;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(ptr, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (i < n - 1)
			printf("%s", separator ? separator : "");
	}
	va_end(ptr);
	printf("\n");
}
