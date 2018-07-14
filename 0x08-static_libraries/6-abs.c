#include "holberton.h"

/**
 * _abs - computes the absolute value of an int
 * @n: int
 *
 * Return: int
 */

int _abs(int n)
{
	int abs;

	if (n < 0)
	{
		abs = 0 - n;
		return (abs);
	}
	else
		return (n);
}
