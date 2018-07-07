#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array that we are reversing
 * @n: number of elements of the array
 *
 * Return: none
 */

void reverse_array(int *a, int n)
{
	int r[500];
	int i, end;

	end = n - 1;
	for (i = 0; i < n - 1; i++)
	{
		r[i] = a[end];
		end--;
	}
	for (i = 0; i < n; i++)
		a[i] = r[i];
}
