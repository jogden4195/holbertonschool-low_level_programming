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
	unsigned int i = 0, j,  count = 0, total = 0, length;

	while (accept[length] != '\0')
		length++;
	if (length ==  0)
		return (0);
	while (s[i] != '\0')
	{
		while(accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		if (total < count)
			total = count;
		printf("Length: %u, Letter: %c, Count: %u, Total: %u\n", length, s[i], count, total);
		if (j == length)
			count = 0;
		j = 0;
		i++;
	}
	return (total);
}
