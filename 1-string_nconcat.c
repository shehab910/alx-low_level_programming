#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * The returned pointer shall point to a newly
 * allocated space in memory, which contains s1,
 * followed by the first n bytes of s2, and null terminated
 * If the function fails, it should return NULL
 * If n is greater or equal to the length of s2
 * then use the entire string s2
 * if NULL is passed, treat it as an empty string
 * Return: returned pointer shall point
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	if (n >= len2)
		n = len2;
	ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';
	return (ptr);
}
