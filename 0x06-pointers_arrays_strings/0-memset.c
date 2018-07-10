#include "holberton.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: pointer that points to target memory area
 * @n: the number of bytes that will be filled
 * @b: the constant byte that we will be filling the memory area with
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
