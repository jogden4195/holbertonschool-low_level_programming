#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: none
 */

void print_all(const char * const format, ...)
{
	va_list form_list;
	int i = 0;
	char *para;
	int comma = 0;

	va_start(form_list, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(form_list, int));
				comma = 1;
				break;
			case 'i':
				printf("%i", va_arg(form_list, int));
				comma = 1;
				break;
			case 'f':
				printf("%f", va_arg(form_list, double));
				comma = 1;
				break;
			case 's':
				para = va_arg(form_list, char*);
				if (para == NULL)
				{
					para = "(nil)";
				}
				printf("%s", para);
				comma = 1;
				break;
			default:
				break;
		}
		if (comma == 1 && format[i + 1] != '\0')
			printf(", ");
		comma = 0;
		i++;
	}
	printf("\n");
	va_end(form_list);
}
