#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid (int)
 * @height: height of the grid (int)
 *
 * Return: pointer to array or NULL if failure or width or height is 0
 * or negative
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **t;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	t = (int **)malloc(sizeof(int *) * height);
	if (t == NULL)
		return (NULL);
	while (i < height)
	{
		t[i] = (int *)malloc(sizeof(int) * width);
		if (t[i] == NULL)
		{
			while (i >= 0)
			{
				free(t[i]);
				i--;
			}
			free(t);
			return (NULL);
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		while (j < width)
		{
			*(*(t + i) + j) = 0;
			j++;
		}
		j = 0;
		i++;
	}
	return (t);
}
