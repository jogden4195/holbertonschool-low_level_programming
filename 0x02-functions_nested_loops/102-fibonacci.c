#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int a = 1, b = 2, c = 0, i;

	printf("%lu, %lu, ", a, b);
	for (i = 0; i <= 48; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (i != 48)
			printf("%lu, ", c);
		else
		  	printf("%lu\n", c);
	}
	return (0);
}
