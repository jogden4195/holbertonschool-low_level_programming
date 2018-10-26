#include "sort.h"

/**
 * bubble_sort - a function that sorts an array of ints
 * in ascending order using the Bubble Sort algorithm
 * @array: the array we are sorting
 * @size: the size of the array
 *
 * Return: the newly sorted array
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int a, i, j;

	if (size == 1 || size == 0)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 1; j < size - i; j++)
		{
			if (array[j] < array[j - 1])
			{

				a = array[j];
				array[j] = array[j - 1];
				array[j - 1] = a;
				print_array(array, size);
			}
		}
	}

}
