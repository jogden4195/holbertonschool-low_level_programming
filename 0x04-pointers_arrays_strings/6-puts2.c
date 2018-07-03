#include "holberton.h"

/**
 * puts2 - writes a function that prints out every other character
 * of a string, followed by a new line
 * @str: str that we will be manipulating
 *
 * Return: none
 */

void puts2(char *str)
{
	int i = 0, counter = 0;

	while (str[counter] != '\0')
		counter++;
	while (i <= counter)
	{
		if (str[i] != '\0')
			_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
