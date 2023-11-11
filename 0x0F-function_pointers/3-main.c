#include "3-calc.h"

/**
* main - do the maths.
* @argc: number of arguments.
* @argv: an array of strings.
* Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int a, b;
	int (*f)(int, int);

	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		f = get_op_func(argv[2]);
		if ((*argv[2] == '%' || *argv[2] == '/') && b == 0)
		{
		printf("Error\n");
		exit(100);
		}
	}
	printf("%d\n", f(a, b));
	return (0);
}
