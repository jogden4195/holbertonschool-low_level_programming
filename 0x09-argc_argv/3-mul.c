#include <stdio.h>
int str2int(char *str);

/**
 * main - multiplies two numbers
 * @argc: number of arguments given to main
 * @argv: array of arguments given to main in the form of ints
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = str2int(argv[1]);
	b = str2int(argv[2]);
	printf("%d\n", a * b);
	return (0);
}

/**
 * str2int - turns a string into an int
 * @str: string we are turning int an int
 *
 * Return: int version of str
 */

int str2int(char *str)
{
	int num = 0, i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == '-')
			i++;
		num = num * 10;
		num = num + str[i++] - '0';
	}
	if (str[0] == '-')
		num *= -1;
	return (num);
}
