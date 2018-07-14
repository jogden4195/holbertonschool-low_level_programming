/**
 * *_strncpy - copies a string
 * @dest: copied string
 * @src: original string
 * @n: max number of chars to be copied
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int length = 0, i;

	while (src[length] != '\0')
		length++;
	for (i = 0; i < n; i++)
	{
		if (i > length)
			dest[i] = 0;
		else
			dest[i] = src[i];
	}
	return (dest);
}
