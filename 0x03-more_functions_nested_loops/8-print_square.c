#include "holberton.h"

/**
 * print_square - prints a square using #
 * @size: number of # on each side
 *
 * Return: void
 */
void print_square(int size)
{
	int i, a;

	if (size == 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (a = 0; a < size; a++)
			_putchar('#');
		_putchar('\n');
	}
}
