#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: array of elements we are searching through
 * @size: size of the array we are searching through
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of the element if match, -1 if no match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int (*we_out_here_tryna)(int) = cmp;
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	while (i < size)
	{
		if (we_out_here_tryna(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
