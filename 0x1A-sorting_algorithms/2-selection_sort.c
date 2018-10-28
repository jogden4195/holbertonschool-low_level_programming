#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @array: the array we are sorting
 * @size: the number of elements in the array
 *
 * Return: none
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i = 0, j;
	int lowest, index, sorted = 0;

	if (size == 1 || size == 0)
		return;
	while (i < size - 1 || sorted == 0)
	{
		sorted = 1;
		lowest = array[i];
		for (j = i; j < size; j++)
		{
			if (array[j] < lowest)
			{
				lowest = array[j];
				index = j;
				sorted = 0;
			}
		}
		if (sorted == 0)
		{
			array[index] = array[i];
			array[i] = lowest;
			print_array(array, size);
		}
		i++;
	}
}
