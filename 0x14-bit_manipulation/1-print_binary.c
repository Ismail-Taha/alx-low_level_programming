#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 *
 * @n: unsigned long int
 *
 * Return: Void
 */
void print_binary(unsigned long int n)
{
	char j;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}

	print_binary(n >> 1);
	if (n & 1)
	{
		j = '1';
	} else
	{
		j = '0';
	}
	_putchar(j);
}
