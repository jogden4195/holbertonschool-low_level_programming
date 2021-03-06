/**
* *_strncat - concatenates 2 strings
* @dest: string that is being concatenated to
* @src: string that is beging concatenated
* @n: number of bytes that will be used from src
*
* Return: char
*/

char *_strncat(char *dest, char *src, int n)
{
	int length, i;

	length = 0;
	while (dest[length] != '\0')
		length++;
	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
		{
			dest[length] = '\0';
			return (dest);
		}
		dest[length] = src[i];
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
