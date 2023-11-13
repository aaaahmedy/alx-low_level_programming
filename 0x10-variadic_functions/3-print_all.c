#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_all - a function that prints anything.
* @format: list of types of arguments passed.
* @...: the arguments.
* Return: Always 0.
*/

void print_all(const char * const format, ...)
{
	va_list ptr;
	char *string;
	const char *str = format;
	int i = 0, i_val;
	float f_val;
	char charac;

	va_start(ptr, format);
	if (format == NULL)
		printf("\n");
	while (*(str + i) != '\0')
	{
		if (i != 0 && (*(str + i) == 'c' || *(str + i) == 'i'
		|| *(str + i) == 'f' || *(str + i) == 's'))
			printf(", ");
		switch (str[i])
		{
			case 'c':
				charac = va_arg(ptr, char);
				printf("%c", charac);
				break;
			case 'i':
				i_val = va_arg(ptr, int);
				printf("%d", i_val);
				break;
			case 'f':
				f_val = va_arg(ptr, double);
				printf("%f", f_val);
				break;
			case 's':
				string = va_arg(ptr, char *);
				printf("%s", string ? string : "(nil)");
				break;
			default:
				break;
		}
		i++;
	}
	va_end(ptr);
	printf("\n");
}
