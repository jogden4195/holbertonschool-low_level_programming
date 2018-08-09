#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number we are converting into binary and printing
 *
 * Return: none
 */

void print_binary(unsigned long int n)
{
	unsigned int i = 524288, flag = 0; /* binary value of i: 1000 0000 0000 0000 */

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (i > 0)
	{
		if ((n & i) == 0)
		{
			if (flag == 1)
				_putchar('0');
		}
		else
		{
			_putchar('1');
			flag = 1;
		}
		i >>= 1;
	}
}
