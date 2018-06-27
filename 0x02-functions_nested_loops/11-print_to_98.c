#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all whole nums from n to 98
 * @n: starting point
 *
 * Return: none
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%lu", i);
			if (i != 98)
				printf(", ");
			else
				printf("\n");
		}
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
			else
				printf("\n");
		}
	}
	else
		printf("98\n");
}
