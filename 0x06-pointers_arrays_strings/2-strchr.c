/**
 * *_strchr - locates a character in a string
 * @s: pointer to the string that we are searching through
 * @c: the character that we are searching for
 *
 * Return: pointer to the first occurance to the target char
 */

char *_strchr(char *s, char c)
{
	char *target = 0;
	int i, length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i++) 
	{
		if (s[i] == c)
		{
			target = &s[i];
		}
	}
	if (s[length] == c)
		target = &s[i];
	return (target);
}
