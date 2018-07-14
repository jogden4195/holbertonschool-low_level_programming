#include <stdio.h>

/**
 * main - returns the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments being passed to main
 * @argv: array of arguments being passed to main in the form of strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
  int value, total;

	if (argc != 2)
	{
	  	printf("Error\n");
	  	Return (1);
	}
	value = atoi(argv[1]);
	if (value < 0)
	{
		printf("0\n");
	}
	if (value < 75)
	{
		
}
