#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: number to print
 *
 * Return: none
 */
void print_number(int n)
{
	int i;

	i = n;
	if (i < 0)
	{
		_putchar('-');
		i = i * -1;
	}
	if (i == 0)
		_putchar('0');
	if (i / 10)
		print_number(i / 10);
	_putchar((i % 10) + '0');
}
