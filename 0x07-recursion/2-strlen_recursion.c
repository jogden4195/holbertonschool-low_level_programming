#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string that we are getting the length of
 *
 * Return: length of string (int)
 */

int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{
	  	_strlen_recursion(s + 1);
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
