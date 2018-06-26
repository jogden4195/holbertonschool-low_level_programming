#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number
 *
 * Return: int
 */

int print_last_digit(int n)
{
	int digit, a, i;

	digit = n % 10;
	if (n < 0)
		digit = 0 - digit;
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
