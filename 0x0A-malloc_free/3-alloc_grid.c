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
	while (i < width)
	{
	  t[i] = (int *)malloc(sizeof(int) * width);
		i++;
	}
	if (t == NULL)
	{
		return (NULL);
	}
	while (i < width)
	{
		while (j < height)
		{
		  *(*(t + i) + j) = 0;
			j++;
		}
		j = 0;
		i++;
	}
	return (t);
}
