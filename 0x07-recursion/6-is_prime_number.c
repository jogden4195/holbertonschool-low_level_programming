#include "holberton.h"
int is_prime_number(int n);
int increase_div(int x, int y);
/**
 * is_prime_number - returns 1 if the input int is prime
 * @n: number we are checking primality for
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	return(increase_div(n, n/2));
}

int increase_div(int x, int y)
{
  	increase_div(x, y - 1);
	if (y == 1)
	  	return (1);
	if (x % y == 0)
		return (0);
}
