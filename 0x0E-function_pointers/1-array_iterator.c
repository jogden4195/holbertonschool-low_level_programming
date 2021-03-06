#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each
 * element of an array
 * @array: the array we will get our arguments for the function from
 * @size: the size of the array
 * @action: pointer to the function we will be using
 *
 * Return: none
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	void (*we_out_here_tryna)(int) = action;
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;
	while (i < size)
	{
		we_out_here_tryna(array[i]);
		i++;
	}
}
