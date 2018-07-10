/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: pointer to the string that we are searching through
 * @accept: pointer to the string of target chars
 *
 * Return: s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	char *target = 0;
	int count = 0, i = 0, j;

        while (accept[count] != '\0')
		count++;
        while (s[i] != '\0')
	{
		for (j = 0; j <= count; j++)
		{
			if (s[i] == accept[j])
				target = &s[i];
		}
		i++;
	}
	return (target);
}
