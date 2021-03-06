#include "holberton.h"

/**
 * puts_half - prints hald of a string, followed by a new line
 * @str: string that is being manipulated
 *
 * Return: none
 */

void puts_half(char *str)
{
	int counter = 0, half, i;

	while (str[counter] != '\0')
		counter++;
	if (counter % 2 != 0)
		half = (counter - 1) / 2;
	else
		half = counter / 2;
	for (i = half; i < counter; i++)
		_putchar(str[i]);
	_putchar('\n');
}
