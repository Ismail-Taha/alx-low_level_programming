#include "main.h"
/**
 * strleng- funcion that get string length
 * @str: string
 *
 * Return: Always number when Done
 */

int strleng(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
		;

	return (length);
}

/**
 * str_concat - funcion to concatenate two strings into a new string
 * @s1: string 1
 * @s2: string 2
 *
 * Return: Always a pointer when Done
 */

char *str_concat(char *s1, char *s2)
{
	char *c;

	int size1, size2, total;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = strleng(s1);
	size2 = strleng(s2);

	c = malloc(sizeof(char) * (size1 + size2) + 1);

	if (c == 0)
		return (NULL);

	for (total = 0; total <= size1 + size2; total++)
	{
		if (total < size1)
			c[total] = s1[total];
		else
			c[total] = s2[total - size1];
	}

	c[total] = '\0';

	return (c);
}
