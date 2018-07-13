#include <stdio.h>

/**
 * main - prints the number of arguments passed into main
 * @argc: the number of arguments passed into main
 * @argv: array of arguments passed into main in the form of strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argv[0] != '\0')
	{
		printf("%d\n", argc - 1);
	}	
	return (0);
}
