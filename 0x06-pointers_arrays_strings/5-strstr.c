/**
 * *_strstr - locates a substring.
 * @haystack: pointer to string that we are searching through
 * @needle: pointer to substring that we are searching for
 *
 * Return: pointer to begining of located substring
 * or NULL if substring not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *target = 0;
	int i = 0, j = 0, k, count = 0;

	while (needle[count] != '\0')
		count++;
	if (count == 0)
	{
		target = &haystack[0];
		return (target);
	}
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			k = i;
			while (needle[j] != '\0')
			{
				if (needle[j] == haystack[k])
				{
					j++;
					k++;
				}
				else
				{
					j = 0;
					break;
				}
			}
			if (j == count)
			{
				target = &haystack[i];
				return (target);
			}
		}
		i++;
	}
	return (target);
}
