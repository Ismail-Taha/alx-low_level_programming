#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function that allocates memory for an array, using malloc.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *b;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	b = mem;

	for (index = 0; index < (size * nmemb); index++)
		b[index] = '\0';

	return (mem);
}
