#include "main.h"
/**
 * _strdup - function that return a pointer to a duplicate of str
 * @str: string
 *
 * Return: Always a pointer when Done
 */

char *_strdup(char *str)
{
	char *b;

	int size;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++);

	b = malloc(sizeof(*str) * size + 1);

	if (b == 0)
		return (NULL);
	while (size--)
		b[size] = str[size];

	return (b);
}
