#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number
 *
 * Return: int
 */

int print_last_digit(int n)
{
	int digit, a, i, x;
	
	x = n;
	if (n < 0)
		x = 0 - x;
	digit = x % 10;
	a = 0;
	i = 48;
	while (digit != a)
	{
		i++;
		a++;
	}
	_putchar(i);
	return (a);
}
