#include "holberton.h"

/**
 * print_most_numbers - prints 0,1,3,5-9
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2')
		{
			if (i != '4')
				_putchar(i);
		}
	}
	_putchar('\n');
}
