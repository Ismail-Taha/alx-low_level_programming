#include "search_algos.h"

/**
  * binary_search - function searches for a value in a sorted array
  *                 of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: index where value is located.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i, star, last;

	if (array == NULL)
		return (-1);

	for (star = 0, last = size - 1; last >= star;)
	{
		printf("Searching in array: ");
		for (i = star; i < last; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = star + (last - star) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			last = i - 1;
		else
			star = i + 1;
	}

	return (-1);
}
