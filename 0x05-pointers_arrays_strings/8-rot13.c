/**
 * *rot13 - encodes a string using rot13
 * @str: string that we are encoding
 *
 * Return: char
 */

char *rot13(char *str)
{
	int i = 0, j;
	char letters1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char letters2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == letters1[j])
			{
				str[i] = letters2[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
