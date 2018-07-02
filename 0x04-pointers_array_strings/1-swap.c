#include "holberton.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: pointer to integer that will switch values with b
 * @b: pointer to integer that will switch values with a
 *
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int val1, val2;

	val1 = *a;
	val2 = *b;
	*a = val2;
	*b = val1;
}
