#include "main.h"

/**
 * malloc_checked - function that Allocates memory using malloc.
 * @b: The number of bytes to be allocated.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == 0)
		exit(98);

	return (mem);
}
