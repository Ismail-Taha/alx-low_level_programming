#include "main.h"
/**
 * flip_bits - function flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res;
	unsigned long int count;

	res = n ^ m;
	for (count = 0; res > 0;)
	{
		if ((res & 1) == 1)
			count++;
		res = res >> 1;
	}

	return (count);
}
