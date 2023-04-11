#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * if NULL is passed, treat it as an empty string
 * @s1: string 1.
 * @s2: string 2.
 * Return: The returned pointer should point
 * to a newly allocated space in memory which
 * contains the contents of s1, followed by
 * the contents of s2, and null terminated
 * or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	concat = malloc((len1 + len2 - 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	for (j = 0; j < len2; j++)
		concat[i + j] = s2[j];
	concat[i + j] = '\0';
	return (concat);
}
