#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed berween the strings
 * @n: the number of strings passed to the function
 *
 * Return: none
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str_list;
	unsigned int i = 0;
	char *string;

	if (n == 0)
		return;
	if (separator == NULL)
		return;
	va_start(str_list, n);
	while (i < n)
	{
		string = va_arg(str_list, char*);
		if (string)
			printf("%s", string);
		else
			printf("(nil)");
		if (i != n - 1)
			printf("%s", separator);
		i++;
	}
	va_end(str_list);
	printf("\n");
}
