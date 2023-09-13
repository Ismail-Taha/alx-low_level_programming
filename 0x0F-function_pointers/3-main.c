#include "3-calc.h"
/**
 * main - Prints the result of simple operations.
 * @argc: Number of Parameters
 * @argv: Array of parameters
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	operator = argv[2];
	b = atoi(argv[3]);

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == '/' && b == 0) ||
	    (*operator == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operator)(a, b));

	return (0);
}
