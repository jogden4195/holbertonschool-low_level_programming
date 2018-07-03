#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string that will be reversed
 *
 * Return: none
 */

void rev_string(char *s)
{
	char r[500];
	int i, count = 0, end;

	while (s[count] != '\0')
		count++;
	end = count - 1;
	for (i = 0; i < count; i++)
	{
		r[i] = s[end];
		end--;
	}
	r[i] = '\0';
	count = 0;
	while (s[count] != '\0')
	{
		s[count] = r[count];
		count++;
	}
}
