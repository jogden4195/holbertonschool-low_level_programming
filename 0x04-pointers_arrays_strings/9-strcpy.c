#include "holberton.h"

/**
 * *_strcpy - copies the string pointed to by src, including
 * the terminating null byte, to the buffer pointed to by
 * dest.
 * @dest: destination buffer
 * @src: string
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int counter, i;

	counter = 0;
	while (src[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
		dest[i] = src[i];
	dest[counter] = '\0';
	return (dest);
}
