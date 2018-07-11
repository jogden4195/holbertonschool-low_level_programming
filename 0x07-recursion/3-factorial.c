#include "holberton.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number that we are getting the factorial of
 *
 * Return: factorial of given num (int)
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
