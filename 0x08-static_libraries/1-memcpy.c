/**
 * *_memcpy - copies memory area
 * @dest: pointer to target memory area
 * @src: pointer to the memory area that we are copying from
 * @n: number of bytes we will be copying
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
