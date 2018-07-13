#include <stdio.h>

/**
 * main - prints name of program, followed by a new line.
 *
 * Return: 0
 */

int main (int argc, char *argv[])
{
	if(argc > 0)
	{
  		printf("%s\n", argv[0]);
		argc++;
	}
	return (0);
}
