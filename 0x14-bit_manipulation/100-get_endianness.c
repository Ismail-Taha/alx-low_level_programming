#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int num;
	char *adrss;

	num = 2;
	adrss = (char *)&num;
	if (*adrss)
		return (1);
	return (0);
}
