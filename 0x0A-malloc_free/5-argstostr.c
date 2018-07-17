#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all the arguments of our program
 * @ac: count of arguments being passed
 * @av: arguments being passed to our program
 *
 * Return: pointer to concatenated str if success (char), NULL if fails
 */

char *argstostr(int ac, char **av)
{
	int i, j = 0, k = 0, size;
	char *t;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		if (av[i][0] == '\0')
			size++;
		while (av[i][j] != '\0')
		{
			size++;
			j++;
		}
		size++;
		j = 0;
	}
	size++;
	t = malloc(sizeof(char) * size);
	if (t == NULL)
		return (NULL);
	i = 0;
	j = 0;
	for (i = 0; i < ac; i++)
	{
		if (av[i][0] == '\0')
		{
			t[k] = av[i][0];
			k++;
		}
		while (av[i][j] != '\0')
		{
			t[k] = av[i][j];
			j++;
			k++;
		}
		j = 0;
		t[k] = '\n';
		k++;
	}
	t[k] = '\0';
	return (t);
}
