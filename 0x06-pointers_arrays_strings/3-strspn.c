#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string that is being scanned
 * @accept: pointer to the string that contains the list of chars to match
 *
 * Return: number of matches
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, go = 1, count = 0, total = 0, length;

	while (accept[length] != '\0')
		length++;
	while (s[i] != '\0')
	{

		for (j = 0; j <= length; j++)
		{
			if (s[i] == s[j])
			{
				count++;
				go = 1;
				break;
			}
			go = 0;
		}
		if (total < count)
			total = count;
		if (go == 0)
			count = 0;
		i++;
	}
	return (total);
}
