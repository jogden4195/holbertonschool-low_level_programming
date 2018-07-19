#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string we are concatenating to
 * @s2: string we are concatenating
 * @n: number of bytes of s2 that we are concatenating
 *
 * Return: pointer to concatenated string if success; NULL if failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size2 = 0;
	int end, i = 0, j = 0, size1 = 0;
	char *t;

	if (s1 == NULL)
		size1 = 0;
	else
	{
		while (s1[size1] != '\0') /*getting size of s1*/
			size1++;
	}
	if (s2 == NULL)           /*case for when s2 is NULL*/
		size2 = 0;
	else                      /*getting size of s2*/
	{
		while (s2[size2] != '\0')
			size2++;
	}
	if (size2 < n)            /*
				   *case for when n is
				   *greater than the size of s2
				   */
	{
		t = malloc(sizeof(char) * (size1 + size2 + 1));
		end = size2;      /*
				   *this will be the used to
				   *indicate the end of our concatenated str
				   */
	}
	else
	{
		t = malloc(sizeof(char) * (size1 + n + 1));
		end = n;
	}
	if (t == NULL)            /*case for when malloc fails*/
		return (NULL);
	while (i < size1)         /*initializing our new string*/
	{
		t[i] = s1[i];
		i++;
	}
	while (i < size1 + end)   /*concatinating s2 to s1*/
	{
		t[i] = s2[j];
		i++;
		j++;
	}
	t[i] = '\0';              /*Need that null char at the end of
				   *our new string
				   */
	return (t);
}
