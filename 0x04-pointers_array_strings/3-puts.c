#include "holberton.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: string that will be printed
 *
 * Return: none
 */
void _puts(char *str)
{
	int letter;

	for (letter = 0; str[letter] != '\0'; letter++)
		_putchar(str[letter]);
	_putchar('\n');
}
