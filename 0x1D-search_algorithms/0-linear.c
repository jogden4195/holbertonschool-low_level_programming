#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: pointer to the first element of the array to
 * search in
 * @size: number of elements in array
 * @value: the value of the element we are searching for
 *
 * Return: first index where value is located if success,
 * -1 if value is not present in array or array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (array)
	{
		while (i < size)
		{
			printf("Value checked array[%d] = [%d]\n",
			       i, array[i]);
			if (array[i] == value)
				return (i);
			i++;
		}
	}
	return (-1);
}
