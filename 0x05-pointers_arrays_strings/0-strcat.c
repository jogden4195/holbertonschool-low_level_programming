#include "holberton.h"

/**
 * *_strcat - concatantes 2 strings
 * @src: string that we are concatinating
 * @dest: string that we are concatinating to
 * 
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int length, i;
	length = 0;
	i = 0;

	while (dest[length] != '\0')
		length++;
	while (src[i] != '\0')
	{
		dest[length] = src[i];
		i++;
		length++;
	}
	dest[length + 1] = '\0';
	return (dest);
}
