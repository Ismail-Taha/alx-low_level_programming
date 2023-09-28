#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to unsigned int
 *
 * @b:character
 *
 * Return: the converted num
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res;

	res = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '1' && *b != '0')
			return (0);

		res = (res * 2) + (*b - '0');
		b++;
	}
	return (res);
}
