#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n - the first number that we are taking in
 *
 * Return: sum of all parameters (int)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num_list;
	unsigned int sum = 0, i = 0;

	if (n == 0)
		return (0);
	va_start(num_list, n);
	while (i < n)
	{
		sum += va_arg(num_list, int);
		i++;
	}
	va_end(num_list);
	return (sum);
}
