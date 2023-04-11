#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - splits a string into words.
 * Each element of this array should contain
 * a single word, null-terminated
 * The last element of the returned array should be NULL
 * Words are separated by spaces
 * Return: pointer to an array of strings (words)
 * or NULL if str == NULL or str == "" or failure
 */
char **strtow(char *str)
{
	char **s;
	int i, j, k, m, n, len;

	if (str == NULL)
		return (NULL);
	for (i = 0, len = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
			len++;
	}
	s = malloc(sizeof(char *) * (len + 1));
	if (s == NULL)
		return (NULL);
	for (j = 0, k = 0; str[j] != '\0'; j++)
	{
		if (str[j] != ' ')
		{
			s[k] = malloc(sizeof(char) * (len + 1));
			if (s[k] == NULL)
			{
				for (m = 0; m < k; m++)
					free(s[m]);
				free(s);
				return (NULL);
			}
			for (n = 0; str[j] != ' ' && str[j] != '\0'; n++, j++)
				s[k][n] = str[j];
			s[k][n] = '\0';
			k++;
		}
	}
	s[k] = NULL;
	return (s);
}
