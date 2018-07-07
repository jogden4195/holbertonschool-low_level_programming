/**
 * *leet - encodes a string into 1337
 * @str: string that we are encoding
 *
 * Return: char
 */
char *leet(char *str)
{
	int i = 0, j;
	int lower[] = {97, 101, 116, 108, 111};
	int upper[] = {65, 69, 84, 76, 79};
	int nums[] = {52, 51, 55, 49, 48};

	while (str[i] != 0)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == lower[j] || str[i] == upper[j])
				str[i] = nums[j];
		}
		i++;
	}
	return (str);

}
