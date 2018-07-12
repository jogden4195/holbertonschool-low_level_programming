#include "holberton.h"
int is_prime_number(int n);
int decrease_div(int x, int y);
/**
 * is_prime_number - returns 1 if the input int is prime
 * @n: number we are checking primality for
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (decrease_div(n, 2));
}

/**
 * decrease_div - decreases y, the divisor
 * @x: number we are trying to see is prime
 * @y: the divisor
 *
 * Return: 1 if prime, 0 if not (int)
 */

int decrease_div(int x, int y)
{
	if (x == y)
		return (1);
	if (x % y == 0)
		return (0);
	return (decrease_div(x, y + 1));
}
