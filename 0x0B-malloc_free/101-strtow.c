#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count words in
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
	int count = 0, in_word = 0;

	while (*str != '\0')
	{
		if (*str == ' ')
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		str++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: A pointer to an array of strings (words) or NULL if failed
 */
char **strtow(char *str)
{
	char **words;
	int i = 0, j = 0, k = 0, c = 0, allSpace = 1, len = 0, count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	while (str[c] != '\0')
	{
		if (str[c] != ' ')
			allSpace = 0;
		c++;
	}
	if (allSpace)
		return (NULL);

	count = count_words(str);

	words = malloc((count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	while (str[i] != '\0' && j < count)
	{
		while (str[i] == ' ')
			i++;
		len = 0;
		while (str[i + len] != ' ' && str[i + len] != '\0')
			len++;
		words[j] = malloc((len + 1) * sizeof(char));
		if (words[j] == NULL)
		{
			for (k = 0; k < j; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}
		for (k = 0; k < len; k++)
			words[j][k] = str[i + k];
		words[j][len] = '\0';
		j++;
		i += len;
	}

	words[j] = NULL;

	return (words);
}
