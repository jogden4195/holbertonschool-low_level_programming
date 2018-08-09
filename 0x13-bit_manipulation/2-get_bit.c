#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number we are trying to get bit from
 * @index: index of bit we are searching for
 *
 * Return: value of bit at given index or -1 if failure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num = n, i, remainder = 0;

	if (index >= size(n) * 8)
		return (-1);
	for (i = 0; i <= index; i++)
	{
		if (num == 0)
			return (-1);
		remainder = num % 2;
		num /= 2;
	}
	return (remainder);
}
