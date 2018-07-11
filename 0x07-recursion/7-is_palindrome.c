#include "holberton.h"
int _strlen_recursion(char *s);
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string that we are checking
 *
 * Return: 1 if it is a palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	if (*s != '\0')
	{
		if (_strlen_recursion(s) == 0)
			return (1);
		if (*s == s[_strlen_recursion(s) - 1])
			is_palindrome(s + 1);
		else
			return (0);
	}
	return (1);
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string that we are getting the length of
 *
 * Return: length of string (int)
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
