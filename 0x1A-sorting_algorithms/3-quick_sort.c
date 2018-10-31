#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: array we are sorting
 * @size: size of the array
 *
 * Return: None
 */

void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	butler(array, size, 0, size - 1);
}

/**
 * butler - does the actual recursion part of the quick sort
 * algorithm (name explaination: this function does all the
 * heavy lifting sorta like how a butler does all the heavy
 * lifting for their boss)
 * @array: array we are sorting
 * @size: size of the array
 * @lo: the first element in the subarray
 * @hi: the last element in the subarray
 *
 * Return: None
 */

void butler(int *array, size_t size, int lo, int hi)
{
	int pivot;

	if (lo < hi)
	{
		pivot = partition(array, size, lo, hi);
		butler(array, size, lo, pivot - 1);
		butler(array, size, pivot + 1, hi);
	}
}
/**
 * partition - driver roll down that partition plss
 * @array: the array we are sorting
 * @size: the size of the array
 * @lo: the starting point of our array
 * @hi: the end point of our array
 *
 * Return: the index of our pivot
 */

int partition(int *array, size_t size, int lo, int hi)
{
	int pivot = array[hi], i = lo, j, a;

	for (j = lo; j < hi; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j)
			{
				a = array[j];
				array[j] = array[i];
				array[i] = a;
				print_array(array, size);
			}
			i++;
		}
	}
	if (i != j && array[j] != pivot)
	{
		a = array[i];
		array[i] = pivot;
		array[hi] = a;
		print_array(array, size);
	}
	return (i);
}
