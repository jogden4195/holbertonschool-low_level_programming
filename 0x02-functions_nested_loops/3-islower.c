#include "holberton.h"

/**
 * _islower - checks if character is lowercase
 *
 * c: int
 *
 * Return: int
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
