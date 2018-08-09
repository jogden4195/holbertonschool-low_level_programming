#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number we are editing
 * @index: the index of the bit we are trying to edit
 *
 * Return: 1 if success, -1 if failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	n &= ~(1UL << index);
	return (1);
}
