#include <stdio.h>

/**
 * main - Prints the numbers 00 to 99
 *
 * Return: 0
 */
int main(void)
{
	int i, n;
	char first_int = '0';
	char second_int = '0';

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 9; n++)
		{
			putchar(first_int);
			putchar(second_int);
			if (i != 9 || n != 9)
			{
				putchar(',');
				putchar(' ');
			}
			second_int++;
		}
		first_int++;
		second_int = '0';
	}
	putchar('\n');
	return (0);
}
