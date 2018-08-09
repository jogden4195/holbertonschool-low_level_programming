#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 0 and 1 chars
 *
 * Return: converted number or 0 if the str contains an invalid
 * char or is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, i = 0, j = 0, k = 0, power = 1;

	if (!b)
		return (0);
	while (b[i] != '\0')
		i++;
	while (b[j] != '\0')
	{
		if (b[j] == '0' || b[j] == '1')
		{
			while (k < i - 1)
			{
				power *= 2;
				k++;
			}
			k = 0;
			dec += (b[j] - '0') * power;
			power = 1;
			i--;
		}
		else
			return (0);
		j++;
	}
	return (dec);
}
