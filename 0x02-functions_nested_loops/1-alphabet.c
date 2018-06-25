#include "holberton.h"

/**
 * print_alphabet - Prints out the lowercase alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
