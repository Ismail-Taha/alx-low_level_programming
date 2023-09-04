#include "main.h"
/**
 * create_array - function that creates array of chars
 * @size: size of array
 * @c: character initialized
 *
 * Return: Always character when Done
 */

char *create_array(unsigned int size, char c)
{
	char *a;

	a = malloc(sizeof(char) * size);

	if (size == 0 || a == 0)
		return (0);

	while (size--)
		a[size] = c;

	return (a);
}
