#include <stdio.h>

/**
 * main - Prints the numbers 00 to 99
 *
 * Return: 0
 */
int main(void)
{
	int i, n;

	for (i = '0'; i <= '9'; i++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			putchar(i);
			putchar(n);
			if (i != '9' || n != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
		n = '0';
	}
	putchar('\n');
	return (0);
}
