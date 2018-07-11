/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to a pointer that points to a string
 * @to: pointer to what youre setting the pointer to
 *
 * Return: none
 */

void set_string(char **s, char *to)
{
	int i = 0;
	char dummy[500];

	while (to[i] != '\0')
	{
		dummy[i] = to[i];
		i++;
	}
	dummy[i] = '\0';
	s = &dummy;
}
