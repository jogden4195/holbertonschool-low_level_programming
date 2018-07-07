#include "holberton.h"

/**
 * *cap_string - capitalizes all words of a string
 * @str: string that is being capitalize
 *
 * Return: char
 */

char *cap_string(char *str)
{
	int i = 0, j = 0;
	int array[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	while (str[i] != 0)
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == array[j])
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
		}
		i++;
	}
	return (str);
}
