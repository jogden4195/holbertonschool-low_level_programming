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
	if (i / 10 == 0 && i < 0)
	{
	  	_putchar('-');
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	if (i < 0)
	{
	  _putchar((i % 10) * -1  + '0');
	}
	else
	  _putchar((i % 10) + '0');
}
