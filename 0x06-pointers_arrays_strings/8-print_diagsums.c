#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of ints.
 * @a: matrix of ints
 * @size: size of the matrix
 *
 * Return: none
 */

void print_diagsums(int *a, int size)
{
	long int j = 0, k = size - 1, sum1 = 0, sum2 = 0;

	while (j < size)
	{
		sum1 += *(a + j * size + j);
		j++;
	}
	j = 0;
	while (j < size && k >= 0)
	{
		sum2 += *(a + j * size + k);
		k--;
		j++;
	}
	printf("%ld, %ld\n", sum1, sum2);
}
