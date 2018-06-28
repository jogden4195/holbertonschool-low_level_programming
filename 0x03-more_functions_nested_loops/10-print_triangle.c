#include "holberton.h"

/**
 * print_triangle - prints out a triangle
 * @size: size of the triangle
 *
 * Return: none
 */
void print_triangle(int size)
{
	int i, a, b;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = size - 1; i >= 0; i--)
	{
		for (a = 0; a < i; a++)
			_putchar(' ');
		for (b = size - i; b > 0; b--)
			_putchar('#');
		_putchar('\n');
	}
}
