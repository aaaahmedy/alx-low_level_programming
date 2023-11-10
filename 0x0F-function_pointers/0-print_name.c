#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_ - prints a name
 * @name: name of the person
 * @f: the fonction to callback
 * Return: Nothing.
 */


void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);	}
