#include "holberton.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int multiplier, product, i;

	for (multiplier = 0; multiplier <= 9; multiplier++)
	{
		for (i = 0; i <= 9; i++)
		{
			product = multiplier * i;
			if (product <= 9)
			{
				_putchar(' ');
				_putchar('0' + product);
				if (i != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
				if (product != 81)
				{
					if (i != 9)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
			}
		}
		_putchar('\n');
		product = 0;
	}
}
