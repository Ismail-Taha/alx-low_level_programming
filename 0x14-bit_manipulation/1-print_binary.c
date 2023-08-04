#include "main.h"

/**
 * print_binary - function that prints the binary representation of a num
 *
 * @n: unsigned long int
 *
 * Return: Void
 */
void print_binary(unsigned long int n)
{
	char i;

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
		i = '1';
	} else
	{
		i = '0';
	}
	_putchar(i);
}
