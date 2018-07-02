#include <stdio.h>

/**
 * main - finds and prints the sum of the even values fibonacci numbers under
 * 4,000,000
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int a = 1, b = 2, c = 0, sum = 2;

	while (c <= 4000000)
	{
		c = a + b;
		if (c % 2 == 0)
			sum = sum + c;
		a = b;
		b = c;
	}
	printf("%lu\n", sum);
	return (0);
}
