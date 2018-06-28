#include <stdio.h>

/**
 * main - finds and prints the largest prime factor
 * of the number 612852475143
 *
 * Return: 0
 */
int main(void)
{
	long int i, n, j, k, highest;

	n = 612852475143;
	while (i <= n)
	{
		j = 0;
		if (n % i == 0)
		{
			k = 1;
			while (k <= i)
			{
				if (i % k == 0)
			  		j++;
				k++;
			}
			if (j == 2)
				highest = i;
		}
		i++;
		printf("%ld", highest); 
	}
	printf("%ld\n", highest);
	return (0);
}
