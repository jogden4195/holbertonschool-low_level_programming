char *string_tolower(char *str);
char *cap_string(char *str);

/**
 * *leet - encodes a string into 1337
 * @str: string that we are encoding
 *
 * Return: char
 */
char *leet(char *str)
{
	int i = 0, j;
	char *p;
	int letters[5][2] = {{97, 52}, {101, 51}, {111, 48}, {116, 55}, {108, 49}};

	p = string_tolower(str);
	/*printf("%s", lower);*/
	while (p[i] != 0)
	{
		for (j = 0; j < 5; j++)
		{
			if (p[i] == letters[j][0])
				str[i] = letters[j][1];
		}
		i++;
	}
	str = cap_string(str);
	return (str);

}

/**
 * *string_tolower - modified string_toupper. Makes an entire string lowercase
 * @str: the string that we are making lowercase
 *
 * Return: char
 */

char *string_tolower(char *str)
{
	int i = 0, length = 0;

	while (str[length] != 0)
		length++;
	for (i = 0; i < length; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
	}
	return (str);
}

/**
 * *cap_string - modified version of cap_string. Capitalizes
 * the first word of a sentence in a str.
 * @str: string that we are capitalizing
 *
 * Return: char
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		if (str[i] == '.')
		{
			if (str[i + 1] == ' ')
			{
				if (str[i + 2] >= 97 && str[i + 2] <= 122)
				{
					str[i + 2] = str[i + 2] - 32;
				}
			}
		}
		i++;
	}
	return (str);
}
