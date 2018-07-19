#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of ints
 * @min: the beginning of the range of int
 * @max: the max of the range of ints
 *
 * Return: pointer to the array if success, NULL if failure
 */

int *array_range(int min, int max)
{
	int i = 0;
	int *t;

	if (min > max)
		return (NULL);
	t = malloc(sizeof(int) * (max - min + 1));
	if (t == NULL)
		return (NULL);
	while (min <= max)
	{
		t[i] = min;
		min++;
		i++;
	}
	return (t);
}
