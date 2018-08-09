#include "holberton.h"

/**
 * flip_bits - returns the number of bits you need to flip to
 * get from one number to another
 * @n: the number we are converting into the other number
 * @m: the number you are converting to
 *
 * Return: number of flips needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0, num;
	
	num = n ^ m;
	while (num != 0)
	{
		count += num & 1;
		num >>= 1;
	}
	return (count);
}
