#include "holberton.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the integer that the times table will be based on
 *
 * Return: void
 */
void print_times_table(int n)
{
	int multiplier, i, product;

	if (n > 15 || n < 0)
		return;
	else
	{
		for (multiplier = 0; multiplier <= n; multiplier++)
		{
			for (i = 0; i <= n; i++)
			{
				if (i != 0)
					_putchar(' ');
				product = i * multiplier;
				if (product <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(product + '0');
				}
				else if (product <= 99)
				{
					_putchar(' ');
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
				else
				{
					_putchar((product / 100) + '0');
					_putchar(product / 10 % 10 + '0');
					_putchar((product % 10) + '0');
				}
				if (i != n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
