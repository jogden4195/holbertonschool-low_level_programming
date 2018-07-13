#include <stdio.h>
int str2int(char *str);

/**
 * main - adds positive numbers
 * @argc: number of arguments passed into main
 * @argv: array of arguments passed into main in the form of strings
 *
 * Return: 0 if success, 1 if fail
 */

int main(int argc, char *argv[])
{
	int i = 1, j = 0, num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (argv[i] != '\0')
	{
		num = str2int(argv[i]);
		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}
		j += num;
		i++;
	}
	printf("%d\n", j);
	return (0);
}

/**
 * str2int - converts a char number into an int. Returns -1
 * if there is an invalid character in the number.
 * @str: string we are turning into an int
 *
 * Return: converted int if success, -1 if there is an invalid
 * character
 */
int str2int(char *str)
{
	int num = 0, i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			num = num * 10;
			num = num + str[i++] - '0';
		}
		else
			return (-1);
	}
	return (num);
}
