#include "function_pointers.h"
/**
 * int_index - function that searches for an integer in an array of integers.
 * @array: Array of integers.
 * @size: Size of the array.
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Return: Response.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]) != 0)
			return (j);
	}

	return (-1);
}
