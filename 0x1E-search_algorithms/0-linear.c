#include "search_algos.h"

/**
 * linear_search - Function searches for a value using Linear search algorithm
 * @array: Integer array
 * @size: Number of elements in array
 * @value: The value to search
 * Return: The first index with value matched or -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size < 1)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);

	}
	return (-1);
}
