#include "holberton.h"

/**
 * print_diagonal - prints a diagonal line n \ long
 * @n - how long the line will be
 *
 * Return: none
 */
void print_diagonal(int n)
{
	int i, a;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (a = 0; a <= i; a++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
