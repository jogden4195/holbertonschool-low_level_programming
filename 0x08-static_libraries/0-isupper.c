#include "holberton.h"

/**
 * _isupper - checkes for uppercase character
 * @c: Char
 *
 * Return: int
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
