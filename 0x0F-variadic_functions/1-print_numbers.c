#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @seperator: the string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: none
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list num_list;
	unsigned int i = 0;

	va_start(num_list, n);
	while (i < n)
	{
		printf("%i", va_arg(num_list, int));
		if (i != n - 1)
		{
			if (seperator)
				printf("%s", seperator);
		}
		i++;
	}
	printf("\n");
	va_end(num_list);
}
