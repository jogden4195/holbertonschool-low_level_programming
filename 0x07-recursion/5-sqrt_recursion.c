#include "holberton.h"
int roots(int n, int y);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number we are finding the sqrt for
 *
 * Return: the natural sqrt of n or -1 if n does not have one (int)
 */

int _sqrt_recursion(int n)
{
	return (roots(n, 1));
}

/**
 * roots - calculates whether a number is a sqrt
 * @x: number we are trying to find sqrt for
 * @y: number we are testing to see if is a root of x
 *
 * Return: value of y if root, -1 if no root (int)
 */

int roots(int x, int y)
{
	if (y * y == x)
		return (y);
	if (y > x)
		return (-1);
	return (roots(x, y + 1));
}
