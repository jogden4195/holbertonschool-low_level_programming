#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers, followed by
 * a new line
 * @a: array of ints that we're printing
 * @n: number of elements we're printing
 *
 * Return: none
 */

void print_array(int *a, int n)
{
	int i, j, element;

	for (i = 0; i < n; i++)
	{
		element = a[i];
		j = n - 1;
		if (i == j)
			printf("%d", element);
		else
			printf("%d, ", element);
	}
	printf("\n");
}
