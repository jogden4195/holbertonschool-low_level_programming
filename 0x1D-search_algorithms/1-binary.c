#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of
 * integers using the binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in the array
 * @value: value to search for
 *
 * Return: index of the value if value is found, -1 if value is not
 * present or array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned int i, j,  m = 0, l = 0, r = size - 1;

	if (array)
	{
		while (l <= r)
		{
			printf("Searching in array: ");
			i = l;
			j = r;
			while (i <= j)
			{
				if (i != j)
					printf("%d, ", array[i]);
				else
					printf("%d", array[i]);
				i++;
			}
			printf("\n");
			m = array[(l + r) / 2];
			if (array[m] < value)
				l = m + 1;
			else if (array[m] > value)
				r = m - 1;
			else
				return (m);
		}
	}
	return (-1);
}
