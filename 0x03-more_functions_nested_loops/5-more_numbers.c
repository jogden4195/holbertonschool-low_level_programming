#include "holberton.h"

/**
 * more_numbers - prints the numbers 0-14 10x
 *
 * Return: none
 */
void more_numbers(void)
{
  int i, n, d1, d2;

	for (i = 0; i <= 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n <= 9)
				d2 = n;
			else
			{
				d1 = n / 10;
				d2 = n % 10;
				_putchar(d1 + '0');
			}
			_putchar(d2 + '0'); 
		}
		_putchar('\n');
	}
}
