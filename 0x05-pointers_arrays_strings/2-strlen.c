/**
 * _strlen - returns the length of a string.
 * @s: string to be measured
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
