#include "holberton.h"
#include <stdio.h>

/**
 * main - Performs the Fizz-Buzz test
 *
 * Return: none
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			if ((i % 5) == 0)
				printf("FizzBuzz ");
			else
				printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			if (i == 100)
				printf("Buzz\n");
			else
				printf("Buzz ");
		}
		else
			printf("%d ", i);
	}
	return (0);
}
